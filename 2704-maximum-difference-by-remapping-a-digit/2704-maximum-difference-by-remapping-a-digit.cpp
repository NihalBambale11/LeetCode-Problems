class Solution {
public:
    int minMaxDifference(int num) {
        string str = to_string(num);

        char minchar = '0';
        char maxchar = '0';

        for(int i = 0 ;i < str.size() ; i++){
            if(str[i] >= '0'){
                maxchar = str[i];
                break;
            }
        }

        for(int i = 0 ;i < str.size() ; i++){
            if(str[i] >= '0' && str[i] < '9'){
                minchar = str[i];
                break;
            }
        }

        string maxi = str;
        string mini = str;

        for(int i = 0 ; i < maxi.size() ;i++ ){
            if(maxi[i] == minchar){
                maxi[i] = '9';
            }
        }

        for(int i = 0; i < mini.size() ; i++){
            if(mini[i] == maxchar){
                mini[i] = '0';
            }
        }   

        return stoi(maxi) - stoi(mini);
    }
};