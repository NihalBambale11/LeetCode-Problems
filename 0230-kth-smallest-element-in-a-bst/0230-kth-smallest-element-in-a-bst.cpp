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
    void inorderTraversal(TreeNode* root , vector<int> &v){
        if(root == NULL){
            return ;
        }

         inorderTraversal(root->left , v);
        v.push_back(root->val);
         inorderTraversal(root->right , v);
    }


    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inorderTraversal(root, v);
        for(int i = 0; i < v.size() ; i++){
            if(i == k-1){
                return v[i];
            }
        }
        return 0;
    }
};