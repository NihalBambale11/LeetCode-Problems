class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> s;
        queue<int> q;
        int n = students.size();
        for(int i = 0 ; i < n ; i++){
            q.push(students[i]);
        }

        for(int i = n-1 ; i >= 0 ; i--){
            s.push(sandwiches[i]);
        }

        int count = 0;
        while(count < n){
            if(q.front() != s.top()){
                int x = q.front();
                q.pop();
                q.push(x);
                count++;
            }
            else{
                q.pop();
                s.pop();
                count = 0;
                n--;
            }
        }
        return n;
    }
};