class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        priority_queue<int , vector<int> ,greater<int>> pq(players.begin() ,players.end());

        int i = 0;
        sort(trainers.begin() ,trainers.end());
        int count = 0;
        while(i < trainers.size() && !pq.empty()){
            if(trainers[i] >= pq.top()){
                count++;
                pq.pop();
                i++;
            }
            else{
                i++;
            }
        }
        return count;
    }
};