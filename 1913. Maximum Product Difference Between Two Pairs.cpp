class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxPiarProduct= nums[nums.size()-1]*nums[nums.size()-2];
        int minPairProduct = nums[0]*nums[1];

        return maxPiarProduct - minPairProduct;
    }
};
