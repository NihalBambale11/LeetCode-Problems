class Solution {
public:
    string capitalizeTitle(string title) {
        int count = 0; 
        string str = "";
        for(int i = 0 ; i < title.length(); i++) {
            if(title[i] == ' ') {
                if(count > 2) {
                    str[str.length() - count] = toupper(str[str.length() - count]);
                }
                count = 0; 
                str += ' ';  
            } else {
                if(count == 0) {
                    str += tolower(title[i]);
                } else {
                    str += tolower(title[i]);
                }
                count++;
            }
        }
        if(count > 2) {
            str[str.length() - count] = toupper(str[str.length() - count]);
        }
        return str;
    }
};
