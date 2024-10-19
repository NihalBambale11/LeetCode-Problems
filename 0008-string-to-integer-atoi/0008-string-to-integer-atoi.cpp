class Solution {
public:
    int myAtoi(string s) {
//         char y = 0 ;
//         string result = "";
//         bool flag = false;
//         for(char x : s){
//             if(x == ' ' && !flag){
//                 continue;
//             }
//             else if(x == '-' && !flag){
//                 y = '-';
//                 flag = true;
//             }
//             else if(x == '+'){
//                 y = '+';
//                 flag = true;
//             }
//             else if(isdigit(x)){
//                 if(x != '0' || !result.empty()){
//                     result = result + x;    
//                 }
//                 flag= true;
//             }
//             else if(isalpha(x) || flag){
//                 break;
//             }
//         }
        
//         if(result.empty()){
//             return 0;
//         }
        
//         long long n = stoll(result);
        
//         if(y == '-'){
//             n = n * (-1);
//         }
        
//         if (n < INT_MIN) {
//             return INT_MIN;
//         }
        
//         if (n > INT_MAX) {
//             return INT_MAX;
//         }
        
//         return n;
        
        
        int i=0;
        int sign=1;
        long ans=0;
        while(i<s.length() && s[i]==' ')
            i++;
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+')
            i++;
        while(i<s.length())
        {
            if(s[i]>='0' && s[i]<='9')
            {
                ans=ans*10+(s[i]-'0');
                if(ans>INT_MAX && sign==-1)
                    return INT_MIN;
                else if(ans>INT_MAX && sign==1)
                    return INT_MAX;
                i++;
            }
            else
                return ans*sign;
        }
        return (ans*sign);
        
    }
};