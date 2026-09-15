class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr;
        int k = nums.size();
        for(int i=0; i<n ;i++){
            int j = n+i;
            arr.push_back(nums[i]);
            arr.push_back(nums[j]);
        }
        return arr; 
    }
};