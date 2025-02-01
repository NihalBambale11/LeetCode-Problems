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
    int maxDepth(TreeNode* root) {
                if( root == NULL )
            return 0;

        
        stack<pair<TreeNode*,int>> st;
        st.push({root,1});
        int maxi = 0;
        while(!st.empty()){
            TreeNode* temp = st.top().first;
            int maxh = st.top().second;
            maxi = max(maxi , maxh);
            st.pop();
            if(temp->left){
                st.push({temp->left,maxh+1});
            }
            if(temp->right){
                st.push({temp->right,maxh+1});
            }
        }
        return maxi;
    }
};