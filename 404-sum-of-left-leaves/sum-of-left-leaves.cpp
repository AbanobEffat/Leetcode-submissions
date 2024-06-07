/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int result;
    void getSumLeftLeaf(TreeNode *node,bool isLeft){
        if(node->left==nullptr && node->right==nullptr && isLeft==true )
            result += node->val;
        if(node->left != nullptr)
            getSumLeftLeaf(node->left,true);
        if(node->right != nullptr)
            getSumLeftLeaf(node->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        result = 0;
        if(root!= nullptr)
            getSumLeftLeaf(root,false);
        return result;
    }
};