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
    int sumEvenGrandparent(TreeNode* root) {
         if (!root) return 0; 

        stack<tuple<TreeNode*,TreeNode*,TreeNode*>> st;
        

        st.push({root ,nullptr ,nullptr});
        int sum = 0;

        while (!st.empty()) {
            auto [temp,parent,grand] = st.top();
            st.pop();

            if (grand && grand->val % 2 == 0) {
                sum = sum  + temp->val;
            }

            if (temp->right) {
                st.push({temp->right , temp , parent});

            }

            if (temp->left) {
                st.push({temp->left,temp,parent});
  
            }
        }

        return sum;
    }
};