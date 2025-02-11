class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        vector<int> v;
        sort(arr.begin(),arr.end());
        int med = arr[(arr.size()-1)/2];
        int i = 0; 
        int j = arr.size()-1;
        while(k != 0){
            if( abs(arr[i]-med) > abs(arr[j]-med) ){
                v.push_back(arr[i]);
                i++;
            }
            else{
                v.push_back(arr[j]);
                j--;
            }
            k--;
        }
        return v;
    }
};