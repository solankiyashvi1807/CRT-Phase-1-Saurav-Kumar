#include<iostream>
using namespace std;

class TreeNode
{
public:

    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        this->data = x;
        left = right = NULL;
    }
};

void show(TreeNode *root)
{
    if(root == NULL)
    {
        return;
    }

    cout << root->data << " ";

    show(root->left);

    show(root->right);
}

int main()
{
    TreeNode *t1 = new TreeNode(1);
    TreeNode *t2 = new TreeNode(2);
    TreeNode *t3 = new TreeNode(3);

    t1->left = t2;
    t2->right = t3;

    show(t1);

    return 0;
}