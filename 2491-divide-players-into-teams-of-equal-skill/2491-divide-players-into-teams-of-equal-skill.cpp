class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        
        vector<pair<int,int>> vp;
        long long  sum = 0;
        int i = 0;
        int j = skill.size()-1;
        while(i < j){
            if(skill[i]+skill[j] != skill[i+1]+skill[j-1]){
                return -1;
            }
            sum = sum + (skill[i]*skill[j]);
            i++;
            j--;
            
        }
        return sum;
    }
};