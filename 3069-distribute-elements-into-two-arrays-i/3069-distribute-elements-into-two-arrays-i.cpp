class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        
        v1.push_back(nums[0]);
        v2.push_back(nums[1]);
        
        int i = 0;
        int j = 0;
        int k = 2;
        while(k < nums.size())
        {
            if(v1[i] > v2[j]){
                v1.push_back(nums[k]);
                k++;
                i++;
            }
            else{
                v2.push_back(nums[k]);
                k++;
                j++;
            }
        }
        
        for(int i = 0 ; i < v2.size();i++){
            v1.push_back(v2[i]);
        }
        
        return v1;
    }
};