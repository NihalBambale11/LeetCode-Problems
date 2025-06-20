 class Solution {
public:
    int maxDistance(string s, int k) {
        ios_base::sync_with_stdio(false); cin.tie(NULL);

        int north = 0, west = 0, south = 0, east = 0, x = 0, y = 0, answer = 0;
        for(char & ch: s) {
            if(ch == 'N') { y++; north++; }
            else if(ch == 'S') { y--; south++; }
            else if(ch == 'E') { x++; east++; }
            else { x--; west++;}

            int del_x = min(east, west), del_y = min(north, south); 
            int replaceable = min(k, del_x + del_y); 

           
            answer = max(answer, abs(x) + abs(y) + 2 * replaceable);
        }

        return answer;
    }
};
