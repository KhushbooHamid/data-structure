// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node
{public:
    int data;
    Node* right;
    Node* left;
}*temp,*trav,*root=NULL;

Node* create(int n)
{
    for(int i=0;i<n;i++)
    {
        temp=new Node();
        
        cout<<"enter data"<<endl;
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
                if(temp->data<trav->data)
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
                else if(temp->data>trav->data)
                {
                    if(trav->right==NULL)
                    {
                        trav->right=temp;
                        break;
                    }
                }
                else
                {
                    cout<<"duplicate keys not allowed";
                }
            }
        }
         
    }
}

int main() {
  int n;
  cout<<"enter the number of nodes";
  cin>>n;
 create(n);

    return 0;
}