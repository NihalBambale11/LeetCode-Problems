class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int dist = 0;
        
        while(mainTank>=5 && additionalTank>=1){
            dist = dist + (5*10);
            mainTank =  mainTank -  5;
            mainTank++;
            additionalTank--;
        }

        dist = dist + (mainTank*10);
        return dist;
    }
};