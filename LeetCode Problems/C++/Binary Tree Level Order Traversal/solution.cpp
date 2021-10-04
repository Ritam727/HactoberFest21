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
    // Recursive Approach
    vector<vector<int>> ret;           
     void BuildOrder(TreeNode* root,int level) 
    {
        if(root == NULL) return;                                //Checks if root is present
        if(ret.size() == level)                                  // Mtaches the passed level with size
            ret.push_back(vector<int>());                        // pushes the current pointer into the vector from back
    
        ret[level].push_back(root->val);                         // Pushes the root values into the vector at the particular level
        BuildOrder(root->left, level + 1);                       // left subtree traversal
        BuildOrder(root->right, level + 1);                      // right subtree traversal
    }
    
    vector<vector<int>>levelOrder(TreeNode *root) {
        BuildOrder(root, 0);
        return ret;
    }
};