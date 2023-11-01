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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*> p;
        p.push(root);
        while(!p.empty())
        {
            int n = p.size();
            vector<int> temp(n,0);
            for(int i=0; i<n; i++)
            {
                auto curr = p.front();
                if(curr->left)
                {
                    p.push(curr->left);

                }
                if(curr->right)
                {
                    p.push(curr->right);
                }
                temp[i] = curr->val;
                p.pop();
            }
            ans.push_back(temp);
        }
        return ans;
    }
};