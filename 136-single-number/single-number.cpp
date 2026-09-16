class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // int i;
        // for(i=0; i<n; i++){
        //     if(i<n-1 and nums[i]==nums[i+1]){
        //         i+=1;
        //     }else break;
        // }
        // return nums[i];
        int n = nums.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            ans ^= nums[i]; // xor with element 
            // xor with itself gives 0 so single element is stored alone.
        }
        return ans;
    }
};