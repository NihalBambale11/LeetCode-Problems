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
    int sumNumbers(TreeNode* root) {
        stack<pair<TreeNode* , int>> st;
        st.push({root,0});

        int totalsum =0;

        while(!st.empty()){
            TreeNode* temp = st.top().first;
            int sum = st.top().second;

            st.pop();

            sum = sum*10 + temp->val;

            if(!temp->left && !temp->right){
                totalsum = totalsum + sum;
            }

            if(temp->right){
                st.push({temp->right ,sum});
            }

            if(temp->left){
                st.push({temp->left , sum});
            }
        }

        return totalsum;
    }
};