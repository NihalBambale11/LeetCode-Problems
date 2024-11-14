class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        
        
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> minheap;
        
        
        for(auto x : mp){
            minheap.push({x.second , x.first});
            if(minheap .size() > k){
                minheap.pop();
            }
        }
        
        
        vector<int> v;
        while(!minheap.empty()){
            v.push_back(minheap.top().second);
            minheap.pop();
        }
        
        return v;
//         vector<pair<int,int>> vp;
        
//         for(auto x : mp){
//             vp.push_back(x);
//         }
        
//         sort(vp.begin() ,vp.end() , [](pair<int,int> a , pair<int,int> b){
//            return a.second < b.second; 
//         });
        
//         vector<int> v;
//         for(int i = k; i >= 1 ; i++){
//             v.push_back(vp[i].first);
//         }
//         return v;
        
        
        
    }
};