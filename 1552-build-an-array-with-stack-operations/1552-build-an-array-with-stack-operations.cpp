class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int j = 0;
        vector<string> str;
        for(int i = 1 ; i <= n ; i++){
            if(j == target.size()){
                break;
            }
            if(target[j] == i){
                str.push_back("Push");
                j++;
            }
            else{
                str.push_back("Push");
                str.push_back("Pop");
            }
        }
        return str;
    }
};