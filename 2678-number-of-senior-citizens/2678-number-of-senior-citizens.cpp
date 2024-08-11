class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count =  0 ;
        for(string s : details){
            string x = {s[11],s[12]};
            if(x > "60"){
                count++;
            }
        }
        return count;
    }
};