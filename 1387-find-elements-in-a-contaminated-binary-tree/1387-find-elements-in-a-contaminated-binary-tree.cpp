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
class FindElements {
public:
    unordered_map<int,bool> mp;
    FindElements(TreeNode* root) {
        stack<TreeNode*> st;
        root->val = 0;
        st.push(root);
        mp[root->val] = true;

        while(!st.empty()){
            TreeNode* temp = st.top();
            st.pop();

            if(temp->left != NULL){
                temp->left->val = (2 * temp->val) + 1; 
                mp[temp->left->val] = true;
            }
            if(temp->right != NULL) {
                temp->right->val = (2 * temp->val) + 2;
                mp[temp->right->val] = true;
            }



            if(temp->left){
                st.push(temp->left);
            }
            if(temp->right){
                st.push(temp->right);
            }
        }
    }
    
    bool find(int target) {
        return mp.find(target) != mp.end();
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */