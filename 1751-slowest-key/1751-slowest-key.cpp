class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int maxi = 0; 
        int pressed = 0; 
        char ch = 'a'; 

        for(int i = 0; i < releaseTimes.size(); i++) {
            int duration = releaseTimes[i] - pressed;
            pressed = releaseTimes[i]; 
            
            if (duration > maxi || (duration == maxi && keysPressed[i] > ch)) {
                maxi = duration;
                ch = keysPressed[i];
            }
        }
        return ch;
    }
};
