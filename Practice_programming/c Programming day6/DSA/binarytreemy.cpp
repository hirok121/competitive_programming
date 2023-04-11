#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class node
{
private:
public:
    int data;
    node *left;
    node *right;

    node(int val);
    ~node();
};

node::node(int val)
{

    data = val;
    left = NULL;
    right = NULL;
}

node::~node()
{
}

void printtreeprioder(node *root)
{
    if (!root)
    {
        return;
    }

    cout << root->data << "  ";
    printtreeprioder(root->left);
    printtreeprioder(root->right);
}

void printtreeinoder(node *root)
{
    if (!root)
    {
        return;
    }

    printtreeinoder(root->left);
    cout << root->data << "  ";
    printtreeinoder(root->right);
}

void printtreepostoder(node *root)
{
    if (!root)
    {
        return;
    }

    printtreepostoder(root->left);
    printtreepostoder(root->right);
    cout << root->data << "  ";
}

void levelorderprint(node *root)
{

    if (!root)
    {
        return;
    }

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        int i = 0;
        node *node = q.front();
        q.pop();

        if (node != NULL)
        {
            cout << node->data << "  ";
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}

int search(int inorder[], int start, int end, int current)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == current)
        {
            return i;
        }
    }

    return -1;
}

// preorder && inorder

node *buidbinarytree(int priorder[], int inorder[], int start, int end)
{
    static int idx = 0;

    if (start > end)
    {
        return NULL;
    }

    int current = priorder[idx];
    idx++;

    node *root = new node(current);

    if (start == end)
    {
        return root;
    }

    int pos = search(inorder, start, end, current);
    root->left = buidbinarytree(priorder, inorder, start, pos - 1);
    root->right = buidbinarytree(priorder, inorder, pos + 1, end);

    return root;
}

// rplace node data by its subtree sum

void subtreesum(node *root)
{

    if (!root)
    {
        return;
    }

    subtreesum(root->left);
    subtreesum(root->right);

    if (root->left)
    {
        root->data += root->left->data;
    }

    if (root->right)
    {
        root->data += root->right->data;
    }
}

// print ancestors recursive function

bool generateancestors(node *root, int key, stack<node *> &st)
{

    if (!root)
    {
        return false;
    }

    if (root->data == key)
    {
        return true;
    }

    st.push(root);

    if (generateancestors(root->left, key, st))
    {
        return true;
    }

    // st.pop();

    if (generateancestors(root->right, key, st))
    {
        return true;
    }
    st.pop();

    return false;
}

node *LCA(node *root, int a, int b)
{

    if (!root)
    {
        return NULL;
    }

    if (root->data == a || root->data == b)
    {
        return root;
    }

    node *left = LCA(root->left, a, b);
    node *right = LCA(root->right, a, b);

    if (left && right)
    {
        return root;
    }

    return left ? left : right;
}

void printstack(stack<node *> st)
{

    if (st.empty())
    {
        cout << "stack is NULL";
        return;
    }

    while (!st.empty())
    {
        cout << st.top()->data << "  ";
        st.pop();
    }
    cout << endl;
}

// flatten of binary tree by preorder traversal

node *flatten(node *root)
{

    if (!root)
    {
        return NULL;
    }

    if (!root->left && !root->right)
    {
        return root;
    }

    if (root->left)
    {
        node *left_tail = flatten(root->left);
        node *temp = root->right;
        root->right = root->left;
        root->left = NULL;
        left_tail->right = temp;
    }

    node *right_tail = flatten(root->right);

    return right_tail;

    // return NULL;
}

// flatten of binary tree by inorder traversal

node *flatteninorder(node *&root)
{

    node *current = root;

    if (!root)
    {
        return NULL;
    }

    if (!root->left && !root->right)
    {
        return root;
    }

    if (root->left)
    {
        
        node *left_tail = flatten(root->left);
        node *templeft = root->left;
        root->left = NULL;
        left_tail->right = root;
        root = templeft;
    }

    node *right_tail = flatten(current->right);

    return right_tail;

    // return NULL;
}

// flatten by level order 

void flatten_level_order(node* &root){

queue<node*> q;
q.push(root);
q.push(root->left);
q.push(root->right);
 node* current=q.front();
 q.pop();

while (q.size())
{
   

    node* next=q.front();
    q.pop();

    current->left=NULL;
    current->right=next;

    if (next->left)
        q.push(next->left);
    
    if(next->right)
    q.push(next->right);
    
   current=next;
}


}

// print all node at kth distance in sub tree

void subtreekthDistancenode(node* root,int k){
    if (!root || k<0)
    {
        return;
    }

    if (k==0)
    {
        cout<<root->data<<"  ";
        return; 
    }
    
subtreekthDistancenode(root->left,k-1);
subtreekthDistancenode(root->right,k-1);

}

int  printallnodeatkthdistance(node* root,node* terget,int k){

    if (!root )
    {
        return -1;
    }
    

    if (root==terget)
    {
        subtreekthDistancenode(terget,k);
        return 0;
    }

    int dl=printallnodeatkthdistance(root->left,terget,k);
    if (dl!=-1)
    {
        if (dl+1==k)
            cout<<root->data<<"  ";

        else
            printallnodeatkthdistance(root->right,terget,k-dl-2);

         return dl+1;
    }
    
    
    int dr=printallnodeatkthdistance(root->right,terget,k);
    if (dr!=-1)
    {
        if (dr+1==k)
            cout<<root->data<<"  ";

        else
            printallnodeatkthdistance(root->left,terget,k-dr-2);

         return dl+1;
    }
    
    return -1;

}

// maximum sum path distance in a binary tree


int maxsumpath(node* root){

}

int main()
{
    stack<node *> st;

    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    // root->left->left->left = new node(8);
    // root->left->left->right = new node(9);
    // root->left->left->left->right = new node(9);

    // cout << root->right->left->data;

     printtreeprioder(root);
    cout << endl;
    printtreeinoder(root);
    cout << endl;
    // printtreepostoder(root);

    // int preoder[]={1,2,4,5,3,6,7};
    // int inorder[]={4,2,5,1,6,3,7,};
    // node* node=buidbinarytree(preoder,inorder,0,6);

    // printtreeinoder(node);

    cout << endl;
    cout << endl;

    // printtreeinoder(root);

    // cout << endl;cout << endl;
     levelorderprint(root);
    // int key;
    // cin>>key;

    // generateancestors(root, key, st);
    // printstack( st );

    // cout<<(LCA(root,5,7)->data);
    //flatteninorder(root);
   // flatten_level_order(root);

    //  printtreeprioder(root);
    cout << endl;
      levelorderprint(root);
   // printtreeinoder(root);
    cout << endl;
    // printtreepostoder(root);
    cout << endl;
    cout << endl;

    //subtreekthDistancenode(root->left,2);
  //  printallnodeatkthdistance(root,root->left,2);

    // while (root)
    // {
    //     cout << root->data << "  ";
    //     root = root->right;
    // }

    return 0;
}