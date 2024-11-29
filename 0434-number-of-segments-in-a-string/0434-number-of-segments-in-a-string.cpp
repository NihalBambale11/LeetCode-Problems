class Solution {
public:
    int countSegments(string s) {
         s.append(" ");

        int i = 0;
        int count = 0;

        if (s[0] == ' ') {
            i++;
        }

        while (i < s.size()) {
            if (s[i] == ' ' && s[i - 1] != ' ') {
                count++;
            }
            i++;
        }
        return count;
    }
};