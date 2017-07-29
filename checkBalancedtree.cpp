/*Given a binary tree, find if it is height balanced or not.  A tree is heigh balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree.    Expected time complexity is O(n).

A height balanced tree
        1
     /     \
   10      39
  /
5

An unbalanced tree
        1
     /    
   10   
  /
5
*/

struct Node {
    int data;
    Node* left, * right;
}; 
// This function should return tree if passed  tree 
// is balanced, else false.  Time complexity should
//  be O(n) where n is number of nodes in tree
int height(Node *root){
    if(root==NULL)
      return 0;
    return max(height(root->left),height(root->right))+1;
}
bool isBalanced(Node *root)
{
    //  Your Code here
    if(root==NULL)
      return true;
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right))
       return true;
    else
       return false;
}



