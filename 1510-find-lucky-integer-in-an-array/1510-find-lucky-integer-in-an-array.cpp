class Solution {
public:
    int findLuckyRecursion(map<int,int> mp , vector<int> v ,int i , int count ){
        if(v.size() == i ){
            return count;
        }

        if(mp[v[i]] == v[i]){
            count = max(count , v[i]);
            
        }
        return findLuckyRecursion(mp,v,i+1,count);
        
    }

    int findLucky(vector<int>& arr) {   
        map<int , int> mp;
        for(int x : arr){
            mp[x]++;
        }
        vector<int> temp;
        for(auto x : mp){
            temp.push_back(x.first);
        }

        return findLuckyRecursion(mp,temp,0,-1);
    }
};