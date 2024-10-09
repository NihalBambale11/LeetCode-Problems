class Solution {
public:
    int minAddToMakeValid(string s) {
        int a = 0 ;
        int b = 0 ;
        for(int i = 0 ; i < s.length() ; i++){
           if(s[i] == '('){
            a++; 
           }
           else{
               if(a > 0){
                   a--;
               }
               else{
                   b++;
               }
           }
       }
        return a + b;
    }
   
};