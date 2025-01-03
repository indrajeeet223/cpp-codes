#include<iostream>
using namespace std;
class TreeNode{
    public :
    int val;
    TreeNode * right;
    TreeNode * left;
    TreeNode(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
TreeNode * predessor(TreeNode* root)
{
    if(root==NULL || root->left==NULL)
    {
        return NULL;
    }
    TreeNode* prev=root->left;
    while(prev->right!=NULL)
    {
        prev=prev->right;
    }
    return prev;
}
TreeNode * successor(TreeNode* root)
{
    if(root==NULL || root->right==NULL)
    {
        return NULL;
    }
    TreeNode* prev=root->right;
    while(prev->left!=NULL)
    {
        prev=prev->left;
    }
    return prev;
}
int main()
{
    TreeNode* a=new TreeNode(10);
    TreeNode* b=new TreeNode(5);
    TreeNode* c=new TreeNode(20);
    TreeNode* d=new TreeNode(2);
    TreeNode* e=new TreeNode(8);
    TreeNode* f=new TreeNode(15);
    TreeNode* g=new TreeNode(25);
    TreeNode* h=new TreeNode(4);
    TreeNode* i=new TreeNode(12);
    TreeNode* j=new TreeNode(3);
    TreeNode* k=new TreeNode(13);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    d->right=h;
    h->left=j;
    f->left=i;
    i->right=k;
    TreeNode* prev;
    TreeNode * success;
    prev=predessor(a);
    success=successor(a);
    if (prev) {
        cout << "Predecessor: " << prev->val << endl;
    } else {
        cout << "No Predecessor" << endl;
    }

    if (success) {
        cout << "Successor: " << success->val << endl;
    } else {
        cout << "No Successor" << endl;
    }
    

}