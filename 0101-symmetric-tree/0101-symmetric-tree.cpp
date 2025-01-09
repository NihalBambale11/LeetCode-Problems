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
    bool isValueSame(TreeNode* leftt , TreeNode* rightt){
            if(leftt && rightt){
                return leftt->val == rightt->val;
            }
            return (!leftt && !rightt);

    }

    bool isSymmetric(TreeNode* root) {
        stack<pair<TreeNode* , TreeNode*>> st;
        st.push({root->left,root->right});

        while(!st.empty()){
            TreeNode* leftt = st.top().first;
            TreeNode* rightt = st.top().second;

            st.pop();

            if(!isValueSame(leftt,rightt)){
                return false;
            }
            if(!leftt || !rightt){
                continue;
            }

            st.push({leftt->right,rightt->left});
            st.push({leftt->left,rightt->right});
        }
        return true;
    }
};