class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long maxmass = mass;
        for(int i = 0 ; i < asteroids.size();i++){
            if(maxmass >= asteroids[i]){
                maxmass = maxmass + asteroids[i];
            }
            else{
                return false;
            }
        }
        return true;
    }
};