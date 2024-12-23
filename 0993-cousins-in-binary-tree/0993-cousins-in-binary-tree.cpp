class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        stack<TreeNode*> st1; 
        stack<TreeNode*> st2; 
        stack<int> st3;       
        
        st1.push(root);
        st2.push(nullptr); 
        st3.push(0);
        
        TreeNode *parent1 = nullptr;
        TreeNode *parent2 = nullptr;
        
        int depth1 = -1;
        int depth2 = -1;
        
        while (!st1.empty()) {
            TreeNode* temp1 = st1.top();
            TreeNode* temp2 = st2.top();
            int temp3 = st3.top();
            
            st1.pop();
            st2.pop();
            st3.pop();
            
            if (temp1->val == x) {
                parent1 = temp2;
                depth1 = temp3; 
            }
            
            if (temp1->val == y) {
                parent2 = temp2;
                depth2 = temp3; 
            }
            
            if (parent1 && parent2) {
                return depth1 == depth2 && parent1 != parent2;
            }
            
            if (temp1->left) {
                st1.push(temp1->left);
                st2.push(temp1);
                st3.push(temp3 + 1);
            }
            
            if (temp1->right) {
                st1.push(temp1->right);
                st2.push(temp1);
                st3.push(temp3 + 1);
            }
        }
        
        return false; 
    }
};
