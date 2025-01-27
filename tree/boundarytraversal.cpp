#include<iostream>
#include<algorithm>
#include<climits>
#include<queue>
using namespace std;
class node{
    public :
    int val;
    node*left;
    node*right;
    node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
node * construct(int arr[],int n)
{
    queue<node*>q;
    node*root=new node(arr[0]);
    int i=1;
    int j=2;
    q.push(root);
    while(q.size()>0 && i<n)
    {
        node* temp=q.front();
        q.pop();
        node*l,*r;
        if(arr[i]!=INT_MIN ) l=new node(arr[i]);
        else l=NULL;
        (j!=n && arr[j]!=INT_MIN) ? r=new node(arr[j]) : r=NULL;
        temp->right=r;
        temp->left=l;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}
void leftboundary(node*root)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
     leftboundary(root->left);
    if(root->left==NULL) leftboundary(root->right);
    

}
void leafnode(node*root)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    leafnode(root->left);
    leafnode(root->right);
}
void rightboundary(node*root)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    if(root->right!=NULL) rightboundary(root->right);
    else rightboundary(root->left);
    cout<<root->val<<" ";
}
int main()
{
     int arr[]={1,2,3,4,5,6,INT_MIN,7,INT_MIN,8,INT_MIN,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    node*root=construct(arr,n);
    leftboundary(root);
    cout<<endl;

    leafnode(root);
    cout<<endl;
    rightboundary(root);



    
    
}