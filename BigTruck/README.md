So here we'll use a Slightly modified Dijkstra, which will at each step pick the branch with the most valuable items when provided with several equally short paths options.

#Problem C - Big Truck

Your boss has hired you to drive a big truck, transporting items between two locations in a city. You’re given a description of the city, with locations of interest and the lengths of roads between them. Your boss requires that you take a shortest path between the starting and ending location, and she’ll check your odometer when you’re done to make sure you didn’t take any unnecessary side trips. However, your friends know you have plenty of unused space in the truck, and they have asked you to stop by several locations in town, to pick up items for them. You’re happy to do this for them. You may not be able to visit every location to pick up everything your friends want, but you’d like to pick up as many items as possible on your trip, as long as it doesn’t make the path any longer than necessary.

The two graphs above show examples of what the city may look like, with nodes representing locations, edges representing roads and dots inside the nodes representing items your friends have asked you to pick up. Driving through a location allows you to pick up all the items there; it’s a big truck, with no limit on the items it can carry. In the graph on the left, for example, you have to drive the big truck from location 11 to location 66. If you follow the path 1→2→3→61→2→3→6, the length is 99, and you’ll get to pick up 44 items. Of course, it would be better to drive 1→4→5→61→4→5→6; that’s still a length of 99, but going this way instead lets you pick up an additional item. Driving 1→4→3→61→4→3→6 would let you pick up even more items, but it would make your trip longer, so you can’t go this way.

##Input

The first line of input contains an integer, nn (2≤n≤1002≤n≤100), giving the number of locations in the city. Locations are numbered from 11 to nn, with location 11 being the starting location and nn being the destination. The next input line gives a sequence of nn integers, t1…tnt1…tn, where each titi indicates the number of items your friends have asked you to pick up from location ii. All the titi values are between 00 and 100100, inclusive. The next input line contains a non-negative integer, mm, giving the number of roads in the city. Each of the following mm lines is a description of a road, given as three integers, abdabd. This indicates that there is a road of length dd between location aa and location bb. The values of aa and bb are in the range 1…n1…n, and the value of dd is between 11 and 100100, inclusive. All roads can be traversed in either direction, there is at most one road between any two locations, and no road starts and ends at the same location.

##Output

If it’s not possible to travel from location 11 to location nn, just output out the word “impossible”. Otherwise, output the length of a shortest path from location 11 to location nn, followed by the maximum number of items you can pick up along the way.

Sample Input 1	
~~~~
6
1 1 2 3 1 0
7
1 2 2
2 3 3
3 6 4
1 4 4
4 3 2
4 5 3
5 6 2
~~~~

Sample Output 1
~~~~
9 5
~~~~

Sample Input 2
~~~~
9
1 1 1 1 1 1 1 1 1
10
1 2 3
2 5 3
1 6 2
6 7 2
7 5 2
5 3 1
3 4 2
4 9 3
5 8 2
8 9 4
~~~~

Sample Output 2
~~~~
12 7
~~~~

Sample Input 3	
~~~~
2
5 5
0
~~~~

Sample Output 3
~~~~
impossible
~~~~
