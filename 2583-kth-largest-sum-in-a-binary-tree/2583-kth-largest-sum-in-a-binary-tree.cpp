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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> v;

        
        queue<TreeNode* > q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            long long sum = 0;
            
            while(size--){
                TreeNode* d = q.front();
                q.pop();
                
                sum = sum + (long long)d->val;
                
                if(d->left){
                    q.push(d->left);
                }
                if(d->right){
                    q.push(d->right);
                }
            }
            
            v.push_back(sum);
        }
        
        
        if(v.size() < k){
            return -1;
        }
        
        sort(v.begin(),v.end(),greater<long long>());
        
        return v[k-1];
    }
};