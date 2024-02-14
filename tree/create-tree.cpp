#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node * left_node;
    Node * right_node;

    Node(int x)
    {
       data = x;
       left_node = NULL;
       right_node = NULL;
    }
};

Node* Binary_tree()
{
    int x ;
    cout<<"enter the Node value: ";
    cin>>x;
    if(x==-1) return NULL;
    Node * root = new Node(x);
    cout<<"enter the Left Child "<<x<<"\n";
    root->left_node = Binary_tree();
    cout<<"enter the right child "<<x<<"\n";
    root->right_node = Binary_tree();
    return root;
}

void pre_order(Node* root)
{
  if(!root) return;
 cout<<root->data<<" ";
 pre_order(root->left_node);
 pre_order(root->right_node);
}



int main()
{
   Node*  root = Binary_tree();
   Binary_tree();
   pre_order(root);

    return 0;
}
