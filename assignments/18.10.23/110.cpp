/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
bool maxDepth(TreeNode* root) {
       if(root==NULL)
       {
           return true;
       }
      
            int left = maxDepth(root->left);
            int right = maxDepth(root->right);
       
    
       if(left==-1 || right==-1 || left-right<-1 || left-right>1)
       {
           return false;
       }
       return true;
    }
    bool isBalanced(TreeNode* root) {
        
        return maxDepth(root);
    }
};  