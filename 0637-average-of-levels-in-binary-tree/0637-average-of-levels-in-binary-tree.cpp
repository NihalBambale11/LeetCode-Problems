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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<double> v;
               
        while(!q.empty()){
            int count = q.size();
            double sum = 0; 
            
            for(int i = 0 ; i < count ; i++){
                TreeNode* temp = q.front();
                q.pop();
                
                sum = sum + temp->val;
                
                if(temp->left != NULL){
                    q.push(temp->left);
                }
                if(temp->right != NULL){
                    q.push(temp->right);
                }
            }
            
            double avg = sum / count;
            v.push_back(avg);
        }
        
        return v;
    }
};