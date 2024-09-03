class Solution {
public:
    int getLucky(string s, int k) {
        string numStr = "";

    for (char c : s) {
        int value = c - 'a' + 1;
        numStr += to_string(value);
    }

    int sum = 0;
    for (char digit : numStr) {
        sum += digit - '0';
    }

    while (k-- > 1) {
        int newSum = 0;
        while (sum > 0) {
            newSum += sum % 10;
            sum /= 10;
        }
        sum = newSum;
    }

    return sum;
        

    
    
}

    
    
    
};