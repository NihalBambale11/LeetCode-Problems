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
    vector<int> largestValues(TreeNode* root) {
               if (!root) {
            return {}; 
        }
        queue<TreeNode*> q;
        q.push(root);
        vector<int> maxii;
        
        while(!q.empty()){
            int size = q.size();
            int maxi = INT_MIN;
            for(int i = 0 ; i < size ; i++){
                TreeNode* temp = q.front();
                q.pop();
                
                maxi = max(temp->val,maxi);
                
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            
            maxii.push_back(maxi);
        }
        return maxii;
    }
};