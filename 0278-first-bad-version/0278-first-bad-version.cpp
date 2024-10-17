// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
//     for(int i = 1 ; i <= n ; i++){
//             if(isBadVersion(i)){
//                 return i;
//             }
            
//         }
//         return -1;
        
        
        int low = 1;
        int mid;
        int ans = 0;
        int high = n;
        while(low <= high){
            mid = low + (high-low)/2;
            if(isBadVersion(mid)){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
};