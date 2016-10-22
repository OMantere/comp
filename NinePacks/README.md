#Problem H - Nine Packs
“It’s like how hot dogs come in packs of ten, and buns come in packs of eight or twelve — you have to buy nine packs to make it come out even.”

This is a quote from the 1986 movie, “True Stories”, and it’s true; well, almost true. You could buy four packs of 1010 hotdogs and five packs of 88 buns. That would give you exactly 4040 of each. However, you can make things even with fewer packs if you buy two packs of 1010 hotdogs, along with a pack of 88 buns and another pack of 1212 buns. That would give you 2020 of each, using only 44 total packs.

For this problem, you’ll determine the fewest packs you need to buy to make hotdogs and buns come out even, given a selection of different bun and hotdog packs available for purchase.

##Input
The first input line starts with an integer, HH, the number of hotdog packs available. This is followed by HH integers, h1…hHh1…hH, the number of hotdogs in each pack. The second input line starts with an integer, BB, giving the number of bun packs available. This is followed by BB integers, b1…bBb1…bB, indicating the number of buns in each pack. The values HH and BB are between 00 and 100100, inclusive, and the sizes of the packs are between 11 and 10001000, inclusive. Every available pack is listed individually. For example, if there were five eight-bun packs available for purchase, the list of bun packs would contain five copies of the number eight.

##Output
If it’s not possible to purchase an equal number of one or more hotdogs and buns, just output “impossible”. Otherwise, output the smallest number of total packs you can buy (counting both hotdog and bun packs) to get exactly the same number of hotdogs and buns.

Sample Input 1	
~~~~
4 10 10 10 10
10 8 8 8 12 12 12 8 8 12 12
~~~~

Sample Output 1
~~~~
4
~~~~

Sample Input 2	
~~~~
4 7 7 14 7
3 11 22 11
~~~~

Sample Output 2
~~~~
impossible
~~~~
