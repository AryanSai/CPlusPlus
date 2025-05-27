#include <iostream>
#include <vector>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr)
    {
    }
};

TreeNode *buildTree(const vector<int> &preorder, int &i)
{
    if (i >= preorder.size() || !preorder[i])
    {
        i++;
        return nullptr;
    }
    TreeNode *root = new TreeNode(preorder[i++]);
    root->left = buildTree(preorder, i);
    root->right = buildTree(preorder, i);
    return root;
}

void preOrderTraversal(TreeNode *root)
{
    if (!root)
        return;
    cout << root->val << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void countNodes1(TreeNode *root, int &count)
{
    if (!root)
        return;
    count++;
    countNodes1(root->left, count);
    countNodes1(root->right, count);
}

int countNodes2(TreeNode *root, int &count)
{
    if (!root)
        return 0;
    return countNodes2(root->left, count) + countNodes2(root->right, count) + 1;
}

void sumOfNodes1(TreeNode *root, int &sum)
{
    if (!root)
        return;
    sum += root->val;
    sumOfNodes1(root->left, sum);
    sumOfNodes1(root->right, sum);
}

int sumOfNodes2(TreeNode *root)
{
    if (!root)
        return 0;
    return sumOfNodes2(root->left) + sumOfNodes2(root->right) + root->val;
}

void postOrderTraversal(TreeNode *root)
{
    if (!root)
        return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->val << " ";
}

void inOrderTraversal(TreeNode *root)
{
    if (!root)
        return;
    inOrderTraversal(root->left);
    cout << root->val << " ";
    inOrderTraversal(root->right);
}

void levelOrderTraversal(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *front = q.front();
        q.pop();
        cout << front->val << " ";
        if (front->left)
            q.push(front->left);
        if (front->right)
            q.push(front->right);
    }
}

int main()
{
    vector<int> preorder = {1, 2, 4, 5, 3, 6, 7};
    int i = 0;
    TreeNode *root = buildTree(preorder, i);
    cout << "Pre-order Traversal: " << endl;
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-order Traversal: " << endl;
    postOrderTraversal(root);
    cout << endl;

    cout << "In-order Traversal: " << endl;
    inOrderTraversal(root);
    cout << endl;

    cout << "Level order Traversal: " << endl;
    levelOrderTraversal(root);
    cout << endl;

    int count1 = 0;
    countNodes1(root, count1);
    cout << "There are " << count1 << " number of nodes in the tree!" << endl;

    int count2 = 0;
    countNodes2(root, count2);
    cout << "There are " << count2 << " number of nodes in the tree!" << endl;

    int sum = 0;
    sumOfNodes1(root, sum);
    cout << "The sum of the node values is " << sum << endl;

    cout << "The sum of the node values is " << sumOfNodes2(root) << endl;
}
