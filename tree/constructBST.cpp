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
void level(node*root)
{
    //(root==NULL) return ;
    queue<node*>q;
    q.push(root);
    while(q.size()>0)
    {
        node * temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
         if(temp->right) q.push(temp->right);

    }
    cout<<endl;
}
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
int main()
{
    // construct 
    int arr[]={1,2,3,4,5,6,INT_MIN,7,INT_MIN,8,INT_MIN,9};
    int n=sizeof(arr)/4;
    node*root=construct(arr,n);
    level(root);
}