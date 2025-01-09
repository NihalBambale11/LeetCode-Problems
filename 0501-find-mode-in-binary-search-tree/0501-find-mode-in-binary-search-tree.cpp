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
    vector<int> findMode(TreeNode* root) {
        
        map<int,int> mp;
        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            TreeNode* temp = st.top();
            st.pop();

            mp[temp->val]++;

            if(temp->left){
                st.push(temp->left);
            }
            if(temp->right){
                st.push(temp->right);
            }
        }

        int maxi = 0;
        vector<int> v;
        for(auto x : mp){
            if(x.second > maxi){
                maxi = x.second;
                v.clear();
            }
            if(x.second == maxi){
                v.push_back(x.first);
            }
        }
        return v;
    }
};