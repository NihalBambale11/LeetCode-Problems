class Solution {
public:
    vector<int> applyOperationRecursion(vector<int>& v, int i) {
        if (i >= v.size() - 1) { 
            return moveZeroes(v, 0, 0); 
        }

        if (v[i] == v[i + 1] && v[i] != 0) {
            v[i] *= 2;
            v[i + 1] = 0;
        }

        return applyOperationRecursion(v, i + 1); 
    }

    vector<int> moveZeroes(vector<int>& v, int i, int nonZeroIndex) {
        if (i >= v.size()) return v; 

        if (v[i] != 0) {
            swap(v[i], v[nonZeroIndex]); 
            return moveZeroes(v, i + 1, nonZeroIndex + 1);
        }

        return moveZeroes(v, i + 1, nonZeroIndex);
    }

    vector<int> applyOperations(vector<int>& nums) {
        return applyOperationRecursion(nums, 0);
    }
};
