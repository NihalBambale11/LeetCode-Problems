class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        stack<TreeNode*> st;
        st.push(root);
        int mini = root->val;
        int ans = -1;

        while (!st.empty()) {
            TreeNode* temp = st.top();
            st.pop();

            // If the current node's value is greater than the smallest value (root)
            if (temp->val > mini) {
                // Update the second minimum value if not already set, or take the minimum of current ans and temp->val
                if (ans == -1) {
                    ans = temp->val;
                } else {
                    ans = min(ans, temp->val);
                }
            }

            // Push left and right children onto the stack
            if (temp->left) {
                st.push(temp->left);
            }
            if (temp->right) {
                st.push(temp->right);
            }
        }

        return ans;
    }
};
