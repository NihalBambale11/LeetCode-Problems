class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq(piles.begin(),piles.end());
        
        for(int i = 0 ; i < k ; i++){
            int x = pq.top();
            pq.pop();
            int y = x - floor(x / 2.0);
            
            pq.push(y);
        }
        int sum = 0;
        while(!pq.empty()){
            sum = sum + pq.top();
            pq.pop();
        }
        return sum ;
    }
};