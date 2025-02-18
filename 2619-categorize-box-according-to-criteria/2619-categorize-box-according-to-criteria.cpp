class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long  vol = (long)length*(long)width*(long)height;
        bool bulk = false;
        bool heavy = false;
        if( (length >= 10000 || width >= 10000 || height >= 10000 ) || vol >= 1000000000 ){
            bulk = true;
        }

        if(mass >= 100){
            heavy = true;
        }

        if(bulk && heavy){
            return "Both";
        }

    
        else if(!bulk && !heavy ){
            return "Neither";
        }
        else if(bulk == true && heavy == false){
            return "Bulky";
        }
        return "Heavy";
    }
};