// O(n) solution using a queues 
/* C++ program to print level order traversal using STL */
#include <iostream>
#include <queue>
using namespace std;
struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node* newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
void printLevelOrder(struct Node *root)
{
	if (root==NULL)
	{
		return;
	}	
	queue <Node *> q;
	q.push(root);
	while(q.empty()==false)
	{
		Node *node = q.front();
		cout<<node->data;
		q.pop();
		if (node->left != NULL)
			q.push(node->left);
		if (node->right != NULL)
			q.push(node->right);

 
	}

} 
// Driver program to test above functions
int main()
{
    // Let us create binary tree shown in above diagram
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);
    return 0;
} 