#include <iostream>
using namespace std;
class bst
{
    public:
  int data;
  bst* right;
  bst* left;
}*root=NULL,*trav,*temp;
bst* create(int n)
{
    for(int i=0;i<n;i++)
    {
        temp=new bst();
        cout<<"enter data";
        cin>>temp->data;
        temp->right=NULL;
        temp->left=NULL;
        if(root==NULL)
        root=temp;
        else
        {
            trav=root;
            while(1)
            {
                if(trav->data>temp->data)
                {
                    if(trav->left==NULL)
                    {
                        trav->left=temp;
                        break;
                    }
                    else
                    {
                        trav=trav->left;
                    }
                }
                else if(trav->data<temp->data)
                {
                    if(trav->right==NULL)
                    {
                        trav->right=temp;
                        break;
                    }
                    else
                    trav=trav->right;
                    
                }
                else
                {
                    cout<<"duplicate keys not allowed";
                }
            }
        }
    }
    return root;
}
void preorder(bst* root)
{
    if(root!=NULL)
    {
        cout<<root->data<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

void inord(bst* root)
{
    if(root!=NULL)
    {
        inord(root->left);
        cout<<root->data<<endl;
        inord(root->right);
        
    }
}
void postorder(bst* root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<endl;
    }
}
int main() {
   int n;
   cout<<"enter the number of nodes";
   cin>>n;
   root=create(n);
   cout<<"preorder"<<endl;
   preorder(root);
   cout<<"inorder"<<endl;
   inord(root);
   cout<<"postorder"<<endl;
   postorder(root);

    return 0;
}