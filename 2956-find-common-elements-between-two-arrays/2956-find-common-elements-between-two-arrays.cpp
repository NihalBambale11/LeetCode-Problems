class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp1;
        map<int,int> mp2;
        vector<int> v;
        int count1 = 0;
        int count2 =0;
    
        for(int m1 : nums2){
            mp1[m1]++;
        }
        for(int m2 : nums1){
            mp2[m2]++;
        }
        
        for(int i : nums1){
            if(mp1.find(i) != mp1.end()){
                count1++;
            }
        }
        
        for(int j : nums2){
            if(mp2.find(j) != mp2.end()){
                count2++;
            }
        }
        return {count1,count2};
    }
};