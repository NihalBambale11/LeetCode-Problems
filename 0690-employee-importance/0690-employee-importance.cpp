/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> mp;
        int sum= 0;
        for(auto x : employees){
            mp[x->id] = x;
        }

        stack<int> st;
        st.push(id);
        while(!st.empty()){
            int temp = st.top();
            st.pop();

            Employee* emp = mp[temp];
            sum = sum + emp->importance;

            for(int sub : emp->subordinates){
                st.push(sub);
            }
        }
        return sum;
    }
};