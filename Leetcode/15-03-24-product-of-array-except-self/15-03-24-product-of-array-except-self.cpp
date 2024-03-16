class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>result(nums.size());
        int prod = 1;
        for(int i=0;i<nums.size();i++) {
            result[i] = prod;
            prod = prod*nums[i];
        }
        prod = 1;
        for(int i=nums.size()-1;i>=0;i--) {
            result[i] = result[i]*prod;
            prod = prod*nums[i];
        }
        return result;
    }
};
