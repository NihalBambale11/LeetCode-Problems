class Solution {
public:
    int minMovesRecursion(int target,int maxDoubles,int count){
        if(target == 1){
            return count;
        }

        if(maxDoubles == 0){
            return count + (target-1);
        }

        if(maxDoubles != 0 && (target % 2 == 0 )){
            return minMovesRecursion(target/2,maxDoubles-1,count+1);
        }

        return minMovesRecursion(target-1,maxDoubles,count+1);

    }

    int minMoves(int target, int maxDoubles) {
        int count = 0;
       return minMovesRecursion(target,maxDoubles,count);
    }


};