class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int asum = 0 ;
        int csum = 0;
        int count = 0;
        
        for(int i = 0; i < apple.size();i++){
            asum = asum + apple[i];
        }
        sort(capacity.begin(),capacity.end(),greater<>());
        
        for(int i = 0 ; i < capacity.size();i++){
            csum = csum + capacity[i];
            count++;
            if(csum >= asum){
                return count;
            }
        }
        return -1;
    }
};