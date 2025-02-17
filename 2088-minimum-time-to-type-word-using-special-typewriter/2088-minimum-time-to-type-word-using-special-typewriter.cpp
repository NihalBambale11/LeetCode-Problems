class Solution {
public:
    int minTimeToType(string word) {
        int count = 0;
        int chara = 'a';
        int i = 0;
        while(i < word.size()){
            int temp1 = abs(word[i] - chara);
            int temp2 = 26 - temp1;
            int mini = min(temp1,temp2) + 1;
            count = count + mini;
            chara = word[i];
            i++;
        }
       return count; 
    }   
};