class Solution {
public:
    vector<int> constructRectangle(int area) {
        int len;
        int wid = sqrt(area);
        while(area % wid != 0){
            wid--;
        }
        
        len = area/ wid;
        return {len,wid};
    }
};