#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    struct *left, *right;
}

//A function to convert the given input into tree will come here
//Then we would do the inorder traversal and print the result



//Inorder traversal
void inorder(struct node* root)
{
  if(root->left!=NULL)  inorder(root->left);
  else  if(root->left==NULL)
    {
        cout<<root.val;

    }
    inorder(root.val)
    if inorder(root->right!=NULL); inorder(root->right);

    else  if(root->right==NULL)
    {
        cout<<root.val;

    }





}
