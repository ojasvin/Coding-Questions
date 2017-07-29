'''Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.
Example:
Input:
2
2
3 1 L 3 2 R
4
10 20 L 10 30 R 20 40 L 20 60 R

Output:
1
0

There are two test cases. 
First case represents a tree with 3 nodes and 2 edges where root is 3, 
left child of 3 is 1 and right child of 3 is 2.
Second test case represents a tree with 4 edges and 5 nodes.

'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None

# your task is to complete this function
# function should return True is Tree is SumTree else return False
def sum(root):
    if root==None:
        return 0
    return sum(root.left)+root.data+sum(root.right)
def isSumTree(root):
    ls=0
    rs=0
    if root==None or (root.left==None and root.right==None):
        return True
    ls=sum(root.left)
    rs=sum(root.right)
    
    if ((root.data==ls+rs) and((isSumTree(root.left) and isSumTree(root.right)))):
        return True
    return False
