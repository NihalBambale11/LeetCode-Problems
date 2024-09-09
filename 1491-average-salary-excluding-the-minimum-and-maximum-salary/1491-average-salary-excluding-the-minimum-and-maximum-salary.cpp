class Solution {
public:
    double average(vector<int>& salary) {
        double avg ;
        int sum = 0;
        int count = 0 ;
        sort(salary.begin(),salary.end());
        for(int i = 0 ; i < salary.size();i++){
            sum = sum + salary[i];
            count++;
        }
        
        int diff = salary[0]+salary[salary.size()-1];
        avg = (sum-diff) / (double)(count-2);
    
        return avg;
    }
};