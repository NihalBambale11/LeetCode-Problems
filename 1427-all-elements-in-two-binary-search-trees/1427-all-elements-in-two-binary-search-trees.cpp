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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
       vector<int> v;

       stack<TreeNode*> st1;
       stack<TreeNode*> st2;

       st1.push(root1);
       st2.push(root2);
    if(root1 != NULL){
       while(!st1.empty()){
        TreeNode* temp1 = st1.top();
        st1.pop();

        v.push_back(temp1->val);
        if(temp1->left){
            st1.push(temp1->left);
        }
        if(temp1->right){
            st1.push(temp1->right);
        }
       }
    } 

    if(root2 != NULL){
       while(!st2.empty()){
        TreeNode* temp2 = st2.top();
        st2.pop();
        v.push_back(temp2->val);
        if(temp2->left){
            st2.push(temp2->left);
        }
        if(temp2->right){
            st2.push(temp2->right);
        }
       }
    }

       sort(v.begin(),v.end());

       return v;
    }
};