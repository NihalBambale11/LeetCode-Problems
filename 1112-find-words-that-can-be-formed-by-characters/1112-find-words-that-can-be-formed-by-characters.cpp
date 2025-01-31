class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int> mp;
        for(auto x : chars){
            mp[x]++;
        }
        int sum = 0;
        for(auto x : words){
            map<char,int> temp = mp;
            bool flag = true;
            for(char y : x){
                if(temp[y] > 0){
                    temp[y]--;
                }
                else{
                    flag = false;
                    break;
                }
                
                
            }
            if(flag){
                sum = sum + x.length();
            }
            

        }

        return sum;
    }
};