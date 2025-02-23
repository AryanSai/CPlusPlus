#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};

void inorderHelper(TreeNode *root, vector<int> &sol)
{
    if (root)
    {
        inorderHelper(root->left, sol);
        sol.push_back(root->val);
        inorderHelper(root->right, sol);
    }
}

vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> sol;
    inorderHelper(root, sol);
    return sol;
}

vector<int> inorderTraversalIterative(TreeNode *root)
{
    vector<int> sol;
    stack<TreeNode *> st;
    TreeNode *curr = root;
    while (curr || !st.empty())
    {
        while (curr)
        {
            st.push(curr);
            curr = curr->left;
        }
        TreeNode *top = st.top();
        st.pop();
        sol.push_back(top->val);
        curr = top->right;
    }
    return sol;
}

void preorderHelper(TreeNode *root, vector<int> &sol)
{
    if (root)
    {
        sol.push_back(root->val);
        preorderHelper(root->left, sol);
        preorderHelper(root->right, sol);
    }
}

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> sol;
    preorderHelper(root, sol);
    return sol;
}

vector<int> preorderTraversalIterative(TreeNode *root)
{
    vector<int> sol;
    if (!root)
        return sol;
    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty())
    {
        TreeNode *top = st.top();
        st.pop();
        sol.push_back(top->val);
        if (top->right)
            st.push(top->right);
        if (top->left)
            st.push(top->left);
    }
    return sol;
}

void postorderHelper(TreeNode *root, vector<int> &sol)
{
    if (root)
    {
        postorderHelper(root->left, sol);
        postorderHelper(root->right, sol);
        sol.push_back(root->val);
    }
}

vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> sol;
    postorderHelper(root, sol);
    return sol;
}

void print(const vector<int> &sol)
{
    for (int i : sol)
    {
        cout << i << " ";
    }
}

int main()
{
    TreeNode *root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> sol;

    cout << "In-Order Traversal Recursive: ";
    sol = inorderTraversal(root);
    print(sol);
    cout << endl;

    cout << "In-Order Traversal Iterative: ";
    sol = inorderTraversalIterative(root);
    print(sol);
    cout << endl;

    cout << "Pre-Order Traversal Recursive: ";
    sol = preorderTraversal(root);
    print(sol);
    cout << endl;

    cout << "Pre-Order Traversal Iterative: ";
    sol = preorderTraversalIterative(root);
    print(sol);
    cout << endl;

    cout << "Post-Order Traversal Recursive: ";
    sol = postorderTraversal(root);
    print(sol);
    cout << endl;

    return 0;
}
