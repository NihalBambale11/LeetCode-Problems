class Solution {
public:
    char slowestKeyRecursion(vector<int>& releaseTimes, string keysPressed,int i,int maxi,char ch ,int pressed ){
        //base case
        if(i == releaseTimes.size() ){
            return ch;
        }

        int dur = releaseTimes[i] - pressed;
        

        if(maxi < dur || (maxi == dur && keysPressed[i] > ch)){
            maxi = dur;
            ch = keysPressed[i];
        } 

        return slowestKeyRecursion(releaseTimes,keysPressed,i+1,maxi,ch,releaseTimes[i]);
    }

    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char ch = 'a';
        int i = 0;
        int maxi = 0;
        int pressed = 0;
       return slowestKeyRecursion(releaseTimes,keysPressed,i,maxi,ch,pressed);
    }
};