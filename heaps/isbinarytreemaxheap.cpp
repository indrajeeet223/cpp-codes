#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }

};
int sizec(node*root)
{
    if(root==NULL) return 0;
    return 1+sizec(root->left)+sizec(root->right);
}
bool isCBT(node*root)
{
    if(root==NULL) return true;
    int size=sizec(root);
    int count=0;

    queue<node*>q;
    q.push(root);
    while(count<size)
    {
        node * temp=q.front();
        q.pop();
        count++;
        if(temp!=NULL)
        {
            q.push(temp->left);
            q.push(temp->right);
        }

        
    }

    while(q.size()>0)
    {
        node*temp=q.front();
        if(temp!=NULL) return false;
        q.pop();
    }
    return true;
}

bool ismax(node*root)
{
    if(root==NULL) return 1;
    if(root->left!=NULL && root->val<root->left->val) return false;
    if(root->right!=NULL && root->val<root->right->val) return false;
    return ismax(root->left) && ismax(root->right); 
}
int main()
{
    node* a=new node(20);
    node* b=new node(15);
    node* c=new node(10);
    node* d=new node(8);
    node* e=new node(11);
    node* f=NULL;
    node* g=new node(6);
    a->left=b; a->right=c;
    b->left=d; b->right=e;
    c->left=f; c->right=g;
    (ismax(a)&& isCBT(a)) ? cout<<"yes" :cout<<"no";
   

}