class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        
        for(int i = 0 ;i < operations.size() ; i++ ){
            if(operations[i] == "D"){
                 int ele = s.top();
                 s.push(ele * 2);
            }
            else if(operations[i] == "C"){
                s.pop();
            }
            else if(operations[i] == "+"){
                int x = s.top();
                s.pop();
                int y = s.top();
                s.push(x);
                s.push(x + y);
            }
            else{
                s.push(stoi(operations[i]));
            }
        }
        int sum = 0 ;
        while(!s.empty()){
            sum = sum + s.top();
            s.pop();
        }
        return sum;
    }
};