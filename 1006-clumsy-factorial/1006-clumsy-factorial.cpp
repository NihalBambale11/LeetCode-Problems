class Solution {
public:
    int clumsy(int n) {
        stack<int> st;
        st.push(n);
        n--;
        
        int operation = 0;
        while(n > 0){
            if(operation % 4 == 0){
                int x = st.top();
                st.pop();
                st.push(x * n);
            }
            else if(operation % 4 == 1){
                int y = st.top();
                st.pop();
                st.push(y / n);
            }
            else if(operation % 4 == 2){
                st.push(n);
            }
            else if(operation % 4 == 3){
                st.push(-n);
            }
            
            operation++;
            n--;
        }
        
        int sum = 0;
        while(!st.empty()){
            sum = sum + st.top();
            st.pop();
        }
        
        return sum ;
    }
};