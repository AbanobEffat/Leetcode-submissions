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
    void getMAxDepth(TreeNode* node, int value){
        ++value;
        result = result > value? result : value;
        if(node->left != nullptr) 
            getMAxDepth(node->left,value);
        if(node->right != nullptr) 
            getMAxDepth(node->right,value);
    }
    int maxDepth(TreeNode* root) {
        result = 0;
        if(root != nullptr)
            getMAxDepth(root,0);
        return result;
    }

};