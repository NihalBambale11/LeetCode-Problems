class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int sum=0;
        int count=0;
        map<int,int>mp;
        for(int i:banned){
            mp[i]+=1;
        }
        for(int i=1;i<=n;i++){
            if(mp.find(i)==mp.end()){
                sum+=i;
                if(sum<=maxSum){
                    count++;
                }
                else{
                    break;
                }
            }
        }
        return count;
    }
};