class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        
        long long sum = 0 ;
        priority_queue<int> pq(gifts.begin(),gifts.end());
        for(int i = 0; i < k ; i++){
            int sq = pq.top();
            pq.pop();
            pq.push((int)(sqrt(sq)));
            
        }
         
      
        while(!pq.empty()){
            sum = sum + pq.top();      
            
            pq.pop();
        }
         
        return sum ;
        
        
    }
};