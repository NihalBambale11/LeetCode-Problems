class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int> mp;
        int size1= 0 ;
        int size2 = 0;
        
        for(int x : nums){
            mp[x]++;
        }
        
        for(auto x : mp){
            if(x.second > 2){
                return false;
            }
            else if(x.second == 2){
                size1++;
                size2++;
            }
            else if(x.second == 1){
                if(size1 > size2){
                    size2++;
                }
                else{
                    size1++;
                }
            }
        }
        return size1 == size2;
    }
};