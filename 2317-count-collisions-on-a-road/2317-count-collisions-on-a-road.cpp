class Solution {
public:
    int countCollisions(string directions) {
        stack<char> st;
        int count = 0;
        for(char x : directions){
            if(!st.empty() && (st.top() == 'R' && x == 'L')  ){
                count = count + 2;
                st.pop();
                st.push('S');
            }
            else if(!st.empty() && (st.top() == 'R' && x == 'S' )   ){
                count = count + 1;
                st.pop();
                st.push('S');
            }
            else if(!st.empty() && (st.top() == 'S' && x == 'L')){
                count = count + 1;

            }
            else{
                st.push(x);
            }
        }

        while (!st.empty() && st.top() == 'R') {
            st.pop();
        }
        while (!st.empty()) {
            if (st.top() == 'R') {
                count++;
            }
            st.pop();
        }



        return count;
    }
};