class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> mp;
        int mini = INT_MAX;
        for(int i =  0; i < list1.size() ; i++){
            mp[list1[i]] = i;
        }

        vector<string> v;
        int sum = 0;
        for(int i = 0; i < list2.size();i++){
            if(mp.count(list2[i])){
                sum =  i + mp[list2[i]];
                if(sum < mini){
                    mini = sum;
                    v = {list2[i]};
                }
                else if(sum == mini){
                    v.push_back(list2[i]);
                }
            }
        }
        return v;
    }
};