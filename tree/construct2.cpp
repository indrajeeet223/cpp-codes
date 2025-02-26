#include<iostream>
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
void construct()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
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
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

}