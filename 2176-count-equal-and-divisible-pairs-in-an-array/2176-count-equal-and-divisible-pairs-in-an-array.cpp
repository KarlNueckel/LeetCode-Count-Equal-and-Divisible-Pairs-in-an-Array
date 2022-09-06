class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int total = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 1; j < nums.size(); j++){
                if(nums[i] == nums[j] && i*j % k == 0 && i < j){ //1. make sure the contents of the array are the same 2.make sure the products of i and j are divisible by k 3. make sure i < j
                    //cout << i << "\t" << j << endl;
                    total++;
                }
            }
        }
        return total;
    }
};