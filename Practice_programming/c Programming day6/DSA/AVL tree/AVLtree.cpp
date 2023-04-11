#include <bits/stdc++.h>

using namespace std;

// global variable

int ll = 0, rl = 0, lr = 0, rr = 0;

struct AVLnode
{
    int data;
    AVLnode *left, *right;
    int height;

    AVLnode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
        height = 1;
    }
};

void printtreeinorder(AVLnode *root)
{
    if (!root)
    {
        return;
    }

    printtreeinorder(root->left);
    cout << root->data << "  ";
    printtreeinorder(root->right);
}

void printtreepreorder(AVLnode *root)
{
    if (!root)
    {
        // cout<<"root is null"<<endl;
        return;
    }

    cout << root->data << "  ";
    printtreepreorder(root->left);
    printtreepreorder(root->right);
}

int getheight(AVLnode *node)
{
    // if(!node) return 0;

    if (!node->left && !node->right)
        return 1;

    if (!node->right)
        return 1 + node->left->height;
    if (!node->left)
        return 1 + node->right->height;

    return 1 + max(node->left->height, node->right->height);
}

int balancefact(AVLnode *node)
{
    //  if(!node) return 0;

    if (!node->left && !node->right)
        return 0;

    if (!node->right)
        return node->left->height;
    if (!node->left)
        return -node->right->height;

    return node->left->height - node->right->height;
}

AVLnode *rightrotate(AVLnode *root)
{

    AVLnode *newroot = root->left;
    AVLnode *temp = newroot->right;

    // rotation

    newroot->right = root;
    root->left = temp;

    root->height = getheight(root);
    newroot->height = getheight(newroot);

    return newroot;
}

AVLnode *leftrotate(AVLnode *root)
{

    AVLnode *newroot = root->right;
    AVLnode *temp = newroot->left;

    // rotation

    newroot->left = root;
    root->right = temp;

    root->height = getheight(root);
    newroot->height = getheight(newroot);

    return newroot;
}

AVLnode *insertAVLnode(AVLnode *root, int key)
{

    if (!root)
        return new AVLnode(key);

    if (key < root->data)
    {
        root->left = insertAVLnode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = insertAVLnode(root->right, key);
    }
    else
    {
        return root; // insert is not possible
    }

    root->height = getheight(root);

    int balancefactor = balancefact(root);

    if (balancefactor > 1 && key < root->left->data)
    {
        ll++;
        return rightrotate(root);
    }

    // LR rotation
    if (balancefactor > 1 && key > root->left->data)
    {
        lr++;
        root->left = leftrotate(root->left);
        return rightrotate(root);
    }
    // RR
    if (balancefactor < -1 && key > root->right->data)
    {
        rr++;
        return leftrotate(root);
    }
    // RL rotation

    if (balancefactor < -1 && key < root->right->data)
    {
        rl++;
        root->right = rightrotate(root->right);
        return leftrotate(root);
    }

    return root;
}

AVLnode *deleteinAVLtree(AVLnode *root, int key)
{
    if (!root)
        return NULL;

    if (key < root->data)
    {
        root->left = deleteinAVLtree(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteinAVLtree(root->right, key);
    }
    else
    {

        if (!root->right)
        {
            AVLnode *temp = root;
            root = root->left;
            delete (temp);
            return root;
        }

        if (!root->left)
        {
            AVLnode *temp = root;
            root = root->right;
            delete (temp);
            return root;
        }

        AVLnode *succ, *succparent;
        succparent = root;
        succ = root->right;

        while (succ->left)
        {
            succparent = succ;
            succ = succ->left;
        }

        root->data = succ->data;

        if (succparent == root)
        {
            succparent->right = succ->right;
        }
        else
        {
            succparent->left = succ->right;
        }
        delete (succ);
    }

    if (!root)
        return NULL;

    root->height = getheight(root);

    int balancefactor = balancefact(root);

    if (balancefactor > 1 && balancefact(root->left) >= 0)
    {
        return rightrotate(root);
    }

    // LR rotation
    if (balancefactor > 1 && balancefact(root->left) < 0)
    {
        root->left = leftrotate(root->left);
        return rightrotate(root);
    }
    // RR
    if (balancefactor < -1 && balancefact(root->right) <= 0)
    {
        return leftrotate(root);
    }

    // RL rotation
    if (balancefactor < -1 && balancefact(root->right) > 0)
    {
        root->right = rightrotate(root->right);
        return leftrotate(root);
    }

    return root;
}


// maxforN

int lessforN(AVLnode* root, int k){

    if(!root) return -1;

    if(root->data==k) return root->data;

    if ( root->data < k)
    {
      return lessforN(root->right,k);   
    }
    
    int temp=lessforN(root->left,k);

    return temp==-1 ? root->data :temp;
}


int maxforN(AVLnode* root, int k){

    if(!root) return -1;

    if(root->data==k) return root->data;

    if ( root->data > k)
    {
      return maxforN(root->left,k);   
    }
    
    int temp=maxforN(root->right,k);

    return temp==-1 ? root->data :temp;

}


// Binary Search
int binarySearch(int inorder[], int l, int r, int d)
{
    if(l>r) return -1;

    int mid = (l + r)/2;

    if (inorder[mid] == d)
        return mid;

    else if (inorder[mid] > d)
        return binarySearch(inorder, l, mid - 1, d);

    else
        return binarySearch(inorder, mid + 1, r, d);
}

// Function to print Leaf Nodes by doing preorder
// traversal of tree using preorder and inorder arrays.
void leafNodesRec(int preorder[], int inorder[],int l, int r)
{
   static int indx=0;

    // If array is out of bound, return.
    if ( l > r)
        return;

    int curr=preorder[indx++];
        
    if(l == r)
    {
       cout << inorder[l]<<" ";
        return;
    }

    int loc = binarySearch(inorder, l, r, curr);


    leafNodesRec(preorder, inorder, l, loc - 1);

    leafNodesRec(preorder, inorder, loc + 1, r);
}

void leafNodes(int preorder[], int n)
{
    int inorder[n];

  
    for (int i = 0; i < n; i++)
        inorder[i] = preorder[i];

    sort(inorder, inorder + n);

    leafNodesRec(preorder, inorder, 0, n - 1);
}



int main()
{

    AVLnode *root = NULL;

    root = insertAVLnode(root, 4);
    root = insertAVLnode(root, 2);
    root = insertAVLnode(root, 6);
    root = insertAVLnode(root, 1);
    root = insertAVLnode(root, 3);
    root = insertAVLnode(root, 5);
    root = insertAVLnode(root, 7);
    // root = insertAVLnode(root, 9);
    // root = insertAVLnode(root, 12);
    // root = insertAVLnode(root, 11);

    printtreepreorder(root);
    cout << endl;
    printtreeinorder(root);

    cout << endl;
    cout << endl;

    int arr[]={4 , 2, 1 , 3 , 6 , 5 , 7};
  
    int size=sizeof(arr)/sizeof(arr[0]);

  //  leafNodes(arr,size);

    // root = deleteinAVLtree(root, 1);
    // root = deleteinAVLtree(root, 3);

    // printtreepreorder(root);
    // cout << endl;
    // printtreeinorder(root);
    // cout << lessforN(root,7)<<endl;
    // cout << maxforN(root,7);

    // cout<<ll<<endl;
    // cout<<lr<<endl;
    // cout<<rl<<endl;
    // cout<<rr<<endl;

    return 0;
}