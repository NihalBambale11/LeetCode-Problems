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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<TreeNode*> st1;
        stack<TreeNode*> st2;
        
        st1.push(p);
        st2.push(q);
        
        while(!st1.empty() && !st2.empty()){
            TreeNode* temp1 = st1.top();
            TreeNode* temp2 = st2.top();
            
            st1.pop();
            st2.pop();
            
            if(!temp1 && !temp2){
                continue;
            }
            if(!temp1 || !temp2){
                return false;
            }
            if(temp1->val  != temp2->val){
                return false;
            }
            
            st1.push(temp1->left);
            st1.push(temp1->right);
            
            st2.push(temp2->left);
            st2.push(temp2->right);
            
                
        }
        return st1.empty() && st2.empty();
    }
};