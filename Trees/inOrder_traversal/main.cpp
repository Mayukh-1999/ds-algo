/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */


// Return a vector containing the inorder traversal of the tree
void inorderFun(Node *root, vector <int> &res)
{
    if(root == NULL)return;
    inorderFun(root->left, res);
    res.push_back (root->data);
    inorderFun(root->right, res);
}
vector <int> inOrder(struct Node *root) {
    vector <int> res;
    inorderFun(root, res);
    return res;
}