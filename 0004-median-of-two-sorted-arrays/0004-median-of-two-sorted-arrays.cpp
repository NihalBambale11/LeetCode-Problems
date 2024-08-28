class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int a : nums1){
            v.push_back(a);
        }
        for(int a : nums2){
            v.push_back(a);
        }
        
        sort(v.begin(),v.end());
        int x = v.size();
        int mid;
        if(x % 2 == 0){
            return (v[x/2-1] + v[x/2]) / 2.0;
        }
        else{
            return v[x/2];
        }
    }
};