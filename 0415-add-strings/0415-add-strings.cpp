class Solution {
public:
    string addStrings(string num1, string num2) {
//         long long x = 0;
//         long long y = 0;
        
//         for(long long  i = 0 ; i < num1.length() ; i++){
//             x = x * 10 + (num1[i] - '0');
//         }
        
//         for(long long  i = 0 ; i < num2.length() ; i++){
//             y = y * 10 + (num2[i] - '0');
//         }
        
//         return to_string(x+y);
        
         int n = num1.size(), m = num2.size();

    reverse(begin(num1), end(num1));
    reverse(begin(num2), end(num2));

    // Build the map of characters to digits
    unordered_map<char, int> digits {{'0',0}, {'1',1}, {'2',2}, 
                                     {'3',3}, {'4',4}, {'5',5}, 
                                     {'6',6}, {'7',7}, {'8',8}, 
                                     {'9',9}};

    // Require to store the sum as a string (resultant string)
    string output = "";

    int i = 0, carry = 0;

    while(i < n || i < m || carry) {
        int sum = carry;

        // If its possible to take the ith character of the string num1
        if(i < n)
            sum += digits[num1[i]];
        // If its possible to take the ith character of the string num2
        if(i < m)
            sum += digits[num2[i]];
        i++;

        // Calculate and store the remainder and carry value
        int rem = sum % 10;
        carry = sum / 10;
        // Store the resultant digit
        output.push_back(rem + '0');
    }
    reverse(begin(output), end(output));

    return output;
    }
};