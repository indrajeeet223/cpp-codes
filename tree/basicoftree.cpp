    #include<iostream>
    #include<algorithm>
    using namespace std;
    class node{
        public:
        int val;
        node* left;
        node* right;
        node(int val) // // Constructor to initialize node
        {
            this->val=val;
            this->left=NULL;
            this->right=NULL; 
        } 
    };
    /*
    struct node{
    int val;
    node* root;
    node * left;

    
    node* right;
    ;
    */
    void display(node* root)
    {
        if(root==NULL)
        {
            return ;
        }
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
    }
    int sum(node*root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int ans=root->val+sum(root->left)+sum(root->right);
        return ans;
    }
    // product of all node.
    int levels(node*root) // addition of right subtree and left subtree +1(root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int ans=1+max(levels(root->left),levels(root->right));
        return ans;
    }
    int size(node*root) // it describes the number of node 
    {
        if(root==NULL)
        {
            return 0;
        }
        int ans=1+size(root->left)+size(root->right);
        return ans;
    }
    int maxfun(node*root)
    {
        if(root==NULL)
        {
            return INT8_MIN;
        }
        return max(root->val,max(maxfun(root->left),maxfun(root->right)));
    }

    int main()
    {
    node* a=new node(1);
    node* b=new node(2);
    node* c=new node(3);
    node* d=new node(4);
    node* e=new node(5);
    node* f=new node(6);
    node* g=new node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    display(a);
    cout<<endl;
    cout<<sum(a)<<endl;
    cout<<size(a)<<endl;
     cout<<maxfun(a)<<endl;
     cout<<levels(a)<<endl;
    }