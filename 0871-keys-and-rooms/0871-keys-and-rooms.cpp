class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int> st;
        int n  = rooms.size();
        st.push(0);

        vector<bool> v(n,false);
        v[0]= true;

        while(!st.empty()){
            int i = st.top();
            st.pop();

            for(auto y : rooms[i]){
                if(!v[y]){
                    v[y] = true;
                    st.push(y);
                }
            }
        }

        for(int i= 0; i < v.size();i++){
            if(!v[i]){
                return false;
            }
        }
        return true;
    }
};