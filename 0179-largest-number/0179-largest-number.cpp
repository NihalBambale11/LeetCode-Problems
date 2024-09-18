class Solution {
public:
    string largestNumber(vector<int>& nums) {
//         vector<int> v;
//         int rem;
//         for(int x : nums){
//             if(x > 9){
//                 while(x > 0){
//                     rem = x % 10;
//                     v.push_back(rem);
//                     x = x/10;
//                 }
//             }
//             else{
//                 v.push_back(x);

//             }
//         }
        
//         sort(v.begin(),v.end(),greater<>());
//         string s = "";
//         for(int x : v){
//             s = s + to_string(x);
//         }
        
//         return s;
        
        vector<string> v;
        for(int x : nums) {
            v.push_back(to_string(x));
        }

        sort(v.begin(), v.end(), [](string &a, string &b) {
            return a + b > b + a;
        });

        if(v[0] == "0") return "0";

        string s = "";
        for(string x : v) {
            s += x;
        }

        return s;
    }

};