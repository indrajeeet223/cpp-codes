#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*left;
    node*right;
    node(int val)
    {
        this->left=NULL;
        this->right=NULL;
        this->val=val;
    }
};
void nthlevel(node* root,int c,int l)
{
    if(root==NULL)
    {
        return ;
    }
    if(c==l){
        cout<<root->val<<" ";
        
        return ;
    }
    
    nthlevel(root->left,c+1,l);
    nthlevel(root->right,c+1,l);
}
void nthlevelrev(node* root,int c,int l)
{
    if(root==NULL)
    {
        return ;
    }
    if(c==l){
        cout<<root->val<<" ";
        
        return ;
    }
    
    nthlevelrev(root->right,c+1,l);
    nthlevelrev(root->left,c+1,l);
}
void level(node*root,int c,int l)
{
    for(int i=1;i<=l;i++)
    {
        nthlevel(root,c,i);
    }   
}
void levelrev(node*root,int c,int l)
{
    for(int i=1;i<=l;i++)
    {
        nthlevelrev(root,c,i);
    }
}
int main()
{
    node*a=new node(1);
    node*b=new node(2);
    node*c=new node(3);
    node*d=new node(4);
    node*e=new node(5);
    node*f=new node(6);
    node*g=new node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    level(a,1,3);
    cout<<endl;
    levelrev(a,1,3);
    
}