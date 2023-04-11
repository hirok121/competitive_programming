#include <bits/stdc++.h>

using namespace std;

struct bstnode
{
    int data;
    bstnode *left, *right;

    bstnode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// class bstnode
// {
// private:
// public:
//     int data;
//     bstnode *left, *right;

//     bstnode(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

struct lvlinfo
{
    bstnode *node;
    int min;
    int max;
};


// test code
struct object
{
    string name;
    int age;
    int hieght;

    object();

    object(string nam){
        name=nam;
    }
};



void printtreepreorder(bstnode *root)
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

void printtreeinorder(bstnode *root)
{
    if (!root)
    {
        return;
    }

    printtreeinorder(root->left);
    cout << root->data << "  ";
    printtreeinorder(root->right);
}

void printtreepostorder(bstnode *root)
{
    if (!root)
    {
        // cout << endl;
        return;
    }

    printtreepostorder(root->left);
    printtreepostorder(root->right);
    cout << root->data << "  ";
}

void levelorderprint(bstnode *root)
{

    if (!root)
    {
        return;
    }

    cout << endl;

    queue<bstnode *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        int i = 0;
        bstnode *node = q.front();
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
    cout << endl;
}

// mirror traversal 

void MorrisTraversal(bstnode* root)
{
    bstnode *current, *pre;
 
    if (root == NULL)
        return;
 
    current = root;
    while (current != NULL) {
 
        if (current->left == NULL) {
            cout << current->data << " ";
            current = current->right;
        }
        else {
 
            /* Find the inorder predecessor of current */
            pre = current->left;
            while (pre->right != NULL
                   && pre->right != current)
                pre = pre->right;
 
            /* Make current as the right child of its
               inorder predecessor */
            if (pre->right == NULL) {
                pre->right = current;
                current = current->left;
            }
 
            /* Revert the changes made in the 'if' part to
               restore the original tree i.e., fix the right
               child of predecessor */
            else {
                pre->right = NULL;
                cout << current->data << " ";
                current = current->right;
            } /* End of if condition pre->right == NULL */
        } /* End of if condition current->left == NULL*/
    } /* End of while */
}

void inordermirrortraversal( bstnode* root){

    bstnode *curr,*predessor;

    curr=root;

    while (curr)
    {
        if (!curr->left)
        {
            cout<< curr->data<<"  ";
            curr=curr->right;
        }else{
            // find predessor
            predessor=curr->left;
            while ( predessor->right && predessor->right!=curr )
            {
                predessor=predessor->right;
            }

            if (!predessor->right)
            {
               predessor->right=curr;
               curr=curr->left;
            }else{
                predessor->right=NULL;
                cout<<curr->data<< "  ";
                curr=curr->right;
            }

        }
        
    }
    

}


void reverseinordermirrortraversal( bstnode* root){

    bstnode *curr,*succ;

    curr=root;

    while (curr)
    {
        if (!curr->right)
        {
            cout<< curr->data<<"  ";
            curr=curr->left;
        }else{
            // find predessor
            succ=curr->right;
            while ( succ->left && succ->left!=curr )
            {
               succ=succ->left;
            }

            if (!succ->left)
            {
               succ->left=curr;
               curr=curr->right;
            }else{
                succ->left=NULL;
                cout<<curr->data<< "  ";
                curr=curr->left;
            }

        }
        
    } 

}

bstnode *insertabstnode(bstnode *root, int val)
{

    if (!root)
    {
        // cout << "value added successfully"<<endl;

        return new bstnode(val);
    }

    if (val < root->data)
    {
        root->left = insertabstnode(root->left, val);
    }
    else
    {
        root->right = insertabstnode(root->right, val);
    }

    return root;
}

bstnode *searchinBST(bstnode *root, int key)
{

    if (!root)
    {
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return searchinBST(root->left, key);
    }
    else if (root->data < key)
    {
        return searchinBST(root->right, key);
    }
    // return false;
}

bstnode *inordersuccessor(bstnode *node)
{

    if (!node)
    {
        return NULL;
    }

    bstnode *cur = node;

    while (cur->left)
    {
        cur = cur->left;
    }

    return cur;
}

void deleteinBST(bstnode *&root, int key)
{
    if (!root)
    {
        return;
    }

    if (key < root->data)
    {
        deleteinBST(root->left, key);
    }
    else if (key > root->data)
    {
        deleteinBST(root->right, key);
    }
    else if (key == root->data)
    {
        // if (!root->left && !root->right)
        // {
        //     return;
        // }

        if (!root->right)
        {
            bstnode *temp = root;
            root = root->left;
            delete (temp);
            return;
        }
        if (!root->left)
        {
            bstnode *temp2 = root;
            root = root->right;
            delete (temp2);
            return;
        }

        bstnode *inordersuccessor1 = inordersuccessor(root->right);
        cout << inordersuccessor1->data << endl;
        root->data = inordersuccessor1->data;
        deleteinBST(root->right, inordersuccessor1->data);
    }
}

bstnode *deleteinBST222(bstnode *&root, int key)
{
    if (!root)
    {
        return NULL;
    }

    if (key < root->data)
    {
        root->left = deleteinBST222(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteinBST222(root->right, key);
    }
    else if (key == root->data)
    {
        // if (!root->left && !root->right)
        // {
        //     return NULL;
        // }

        if (!root->right)
        {
            bstnode *temp = root->left;
            delete (root);
            return temp;
        }
        if (!root->left)
        {
            bstnode *temp = root->right;
            delete (root);
            return temp;
        }

        bstnode *inordersuccessor1 = inordersuccessor(root->right);
        cout << inordersuccessor1->data << endl;
        root->data = inordersuccessor1->data;
        root->right = deleteinBST222(root->right, inordersuccessor1->data);
    }
    return root;
}

// without successor function

bstnode *deleteinBST333(bstnode *&root, int key)
{
    if (!root)
    {
        return NULL;
    }

    if (key < root->data)
    {
        root->left = deleteinBST333(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteinBST333(root->right, key);
    }
    else if (key == root->data)
    {
        // if (!root->left && !root->right)
        // {
        //     return NULL;
        // }

        if (!root->right)
        {
            bstnode *temp = root->left;
            delete (root);
            return temp;
        }
        if (!root->left)
        {
            bstnode *temp = root->right;
            delete (root);
            return temp;
        }

        bstnode *succparent = root;
        bstnode *succ = root->right;
        while (succ->left)
        {
            succparent = succ;
            succ = succ->left;
        }

        if (succparent != root)
        {
            succparent->left = succ->right;
        }
        else
        {
            succparent->right = succ->right;
        }

        root->data = succ->data;
        delete (succ);
    }
    return root;
}

// build BST from preorder sequence Time complexity O(n2)

bstnode *constructTree(int pre[], int low, int high, int size)
{
    static int preIndex = 0;
    // Base case
    if (preIndex >= size || low > high)
        return NULL;

    int curr = pre[preIndex];
    preIndex++;
    bstnode *root = new bstnode(curr);

    if (low == high)
        return root;

    // Search for the first element greater than root
    int i;
    for (i = low; i <= high; ++i)
        if (pre[i] > root->data)
            break;

    root->left = constructTree(pre, preIndex, i - 1, size);

    root->right = constructTree(pre, i, high, size);

    return root;
}

// build BST from preorder sequence with range Time complexity O(n)

bstnode *constructTreewithrange(int *pre, int min, int max, int size)
{
    static int preidx = 0;

    if (preidx > size)
    {
        return NULL;
    }

    int rootkey = pre[preidx];
    bstnode *root = NULL;

    if (min < rootkey && rootkey < max)
    {
        root = new bstnode(rootkey);
        preidx++;
    }

    if (root && preidx < size)
    {
        root->left = constructTreewithrange(pre, min, rootkey, size);
    }

    if (root && preidx < size)
    {
        root->right = constructTreewithrange(pre, rootkey, max, size);
    }

    return root;
}

// build BST from preorder sequence with with stack Time complexity O(n)

bstnode *constructTreewithstack(int *pre, int size)
{

    bstnode *root = NULL, *temp = NULL;

    root = new bstnode(pre[0]);

    stack<bstnode *> st;
    st.push(root);

    for (int i = 1; i < size; i++)
    {
        temp = NULL;

        while (st.size() && pre[i] > st.top()->data)
        {
            temp = st.top();
            st.pop();
        }

        if (temp)
        {
            temp->right = new bstnode(pre[i]);
            st.push(temp->right);
        }
        else
        {
            st.top()->left = new bstnode(pre[i]);
            st.push(st.top()->left);
        }
    }

    return root;
}

// constract a bst from levelorder traversal

// false approch

bstnode *constructfromlvlodr(int *arr, int size)
{

    static int idx = 0;
    queue<bstnode *> que;

    bstnode *root = new bstnode(arr[idx++]);
    que.push(root);

    while (idx < size)
    {
        bstnode *temp = que.front();
        que.pop();

        if (arr[idx] < temp->data)
        {
            temp->left = new bstnode(arr[idx++]);
            que.push(temp->left);
        }

        if (arr[idx] > temp->data)
        {
            temp->right = new bstnode(arr[idx++]);
            que.push(temp->right);
        }
    }

    return root;
}

// succeed

bstnode *constructfromlvlodr222(int *arr, int size)
{
    int idx = 0;
    queue<lvlinfo> que;
    // int min=INT_MIN;
    // int max=INT_MAX;

    bstnode *root = new bstnode(arr[idx++]);

    lvlinfo root1;
    root1.node = root;
    root1.min == INT_MIN;
    root1.max = INT_MAX;

    que.push(root1);

    while (idx < size)
    {
        lvlinfo lvltemp = que.front();
        bstnode *temp = lvltemp.node;
        que.pop();

        if (temp && idx < size && (arr[idx] > lvltemp.min) && (arr[idx] < temp->data))
        {
            temp->left = new bstnode(arr[idx++]);
            lvlinfo lvltempleft;
            lvltempleft.node = temp->left;
            lvltempleft.min = lvltemp.min;
            lvltempleft.max = temp->data;
            que.push(lvltempleft);
        }

        if (temp && idx < size &&  (arr[idx] > temp->data) && (arr[idx] < lvltemp.max))
        {
            temp->right = new bstnode(arr[idx++]);
            lvlinfo lvltempright;
            lvltempright.node = temp->right;
            lvltempright.min = temp->data;
            lvltempright.max = lvltemp.max;
            que.push(lvltempright);
        }
    }

    return root;
}

// flase approach

bool isBST(bstnode *root)
{

    if (!root)
    {
        return true;
    }

    bool leftnode = true;
    bool rightnode = true;
    bool compleft = true;
    bool compright = true;

    if (root->left)
        leftnode = isBST(root->left);

    if (root->right)
        rightnode = isBST(root->right);

    if (leftnode && rightnode)
    {
        if (root->left)
            compleft = root->left->data < root->data;

        if (root->right)
            compright = root->data < root->right->data;

        return compleft && compright;
    }

    return false;
}

// valid approach

bool isBSTvalid(bstnode *root, bstnode *min, bstnode *max)
{

    if (!root)
        return true;

    if (min && root->data <= min->data)
        return false;

    if (max && root->data >= max->data)
        return false;

    bool leftvalid = isBSTvalid(root->left, min, root);
    bool rightvalid = isBSTvalid(root->right, root, max);

    return leftvalid && rightvalid;
}

// sorted arry to BST

void sortedarrytobst(bstnode *&root, int *arr, int start, int end)
{

    if (start > end)
        return;

    int mid = (start + end) / 2;

    root = new bstnode(arr[mid]);

    sortedarrytobst(root->left, arr, start, mid - 1);
    sortedarrytobst(root->right, arr, mid + 1, end);
}

// all possible BST by given k nodes

vector<bstnode *> allpossibleBST(int start, int end)
{

    vector<bstnode *> trees;

    if (start > end)
    {
        trees.push_back(NULL);
        return trees;
    }

    for (int i = start; i <= end; i++)
    {
        vector<bstnode *> leftsubtree = allpossibleBST(start, i - 1);
        vector<bstnode *> rightsubtree = allpossibleBST(i + 1, end);

        for (int j = 0; j < leftsubtree.size(); j++)
        {
            bstnode *lefttemp = leftsubtree[j];
            for (int k = 0; k < rightsubtree.size(); k++)
            {
                bstnode *righttemp = rightsubtree[k];
                bstnode *root = new bstnode(i);
                root->left = lefttemp;
                root->right = righttemp;
                trees.push_back(root);
            }
        }
    }

    return trees;
}

// level order zigzag traversal

void levelorderzigzag(bstnode *root)
{
    if (!root)
        return;

    stack<bstnode *> currlvl;
    stack<bstnode *> nextlvl;
    bool lefttoright = true;
    bstnode *temp = NULL;

    currlvl.push(root);

    while (!currlvl.empty())
    {
        temp = currlvl.top();
        currlvl.pop();
        if (temp)
        {
            cout << temp->data << " ";

            if (lefttoright)
            {
                if (temp->left)
                    nextlvl.push(temp->left);
                if (temp->right)
                    nextlvl.push(temp->right);
            }
            else
            {
                if (temp->right)
                    nextlvl.push(temp->right);
                if (temp->left)
                    nextlvl.push(temp->left);
            }
        }

        if (currlvl.empty())
        {
            lefttoright = !lefttoright;
            swap(currlvl, nextlvl);
        }
    }
}

// greater sum problem brute force approach

void greatersum(bstnode *root)
{

    static int sum = 0;

    if (!root)
        return;

    greatersum(root->right);

    sum += root->data;

    root->data = sum - root->data;

    greatersum(root->left);
}

int main()
{

    bstnode *root = NULL;
    // root = insertabstnode(root, 6);
    // insertabstnode(root, 1);
    // insertabstnode(root, 2);
    // insertabstnode(root, 4);
    // insertabstnode(root, 3);
    // insertabstnode(root, 7);
    // insertabstnode(root, 5);
    // insertabstnode(root, 9);
    // insertabstnode(root, 8);
    // insertabstnode(root, 10);
    // insertabstnode(root, 0);

    int pre[] = {6, 1, 0, 2, 4, 3, 5, 7, 9, 8, 10};
    int size = sizeof(pre) / sizeof(pre[0]);
    cout << endl;

    // int levelorder[]={6,1,7 ,0,2,9 ,4,8,10,3,5};
    // int levelorder[]={6,1,7,2,8,4,10,3,5 } ;
     int levelorder[8]={50,30,70,20,40,60,80,10};
     int sizelvl=sizeof(levelorder)/sizeof(levelorder[0]);

    root=constructfromlvlodr222(levelorder,sizelvl);

    // root = constructTreewithrange(pre, INT_MIN, INT_MAX, size);

    printtreepreorder(root);
    cout << endl;
    cout << endl;

    printtreeinorder(root);
    cout << endl;
    cout << endl;

    inordermirrortraversal(root);
     cout << endl;
    cout << endl;

    reverseinordermirrortraversal(root);
     cout << endl;
    cout << endl;

    // greatersum(root);
    //  printtreeinorder(root);cout << endl; cout << endl;

    // printtreepostorder(root);
    levelorderprint(root);

    //  cout<<" print all trees in inorder traversal"<<endl;
    //     for (int i = 0; i <11; i++)
    //     {
    //         cout<< i+1 <<" : "<<arr[i];
    //         cout<<endl;
    //     }


    return 0;
}