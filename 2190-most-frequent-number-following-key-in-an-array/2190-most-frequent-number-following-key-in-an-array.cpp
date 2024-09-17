class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int n = nums.size();
        map<int ,int> M;
        for (int i=0; i<n-1; i++)
        {
            if (nums[i]==key)
                M[nums[i+1]]++;
        }

        int res = 0;
        int maxi = -1;

        for (auto it : M)
        {
            if (it.second > maxi)
            {
                res = it.first;
                maxi = it.second;
            }
        }

        return res;
    }
};