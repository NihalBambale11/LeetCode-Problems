class Solution {
public:
    int minSwaps(string s) {
        int maxii = 0;
        int maxi = 0;
        
        for(int i = 0 ; i < s.length();i++){
            if(s[i] == '['){
                maxii--;
            }
            else{
                maxii++;
            }
            maxi = max(maxi,maxii);

        }
        
        return (maxi+1)/2;
    }
    
};