#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (!p and !q)
            return true;
        else if (!p or !q)
            return false;
        return ((p->val == q->val) and isSameTree(p->left, q->left) and isSameTree(p->right, q->right));
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
