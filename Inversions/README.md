This one can be solved nicely using an array-based segment tree.

#Invert

Implement a data structure that maintains a list of numbers and supports the following operations:

~~~~
Insert a number in the end of the list
Insert a number in the beginning of the list
Sort the list in nondecreasing order
Output the number of inversions in the list
~~~~

An inversion is a pair of indices (i,j) such that i < j[i] < j and a[i] > a[j] a[i] > a[j] where a[k] is the k-th element in the list.

Initially the list is empty.

##Input

The first line of input contains one integer, q, the number of operations to perform. Each of next q lines describes an operation. The first integer of a line is the type of the operation. If the type of the operation is 1 or 2, the line contains also a number aiai, the number to be inserted in the list. If the type of the operation is 4, you should output the number of inversions in the list.

##Output

For each operation of type 4, output the number of inversions in the list.

##Examples

Input:
~~~~
8
1 3
2 5
2 6
4
1 4
3
1 2
4
~~~~

Output:
~~~~
3
4
~~~~
