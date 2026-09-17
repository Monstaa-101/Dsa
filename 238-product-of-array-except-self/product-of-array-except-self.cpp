class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int idx = 0;
        // vector<int> arr;
        // int n = nums.size();
        // for(int j=0; j<n; j++){
        //     int product = 1;
        //     int ele = nums[idx];
        // for(int i=0 ; i<n; i++){
        //     if(nums[i]==ele) continue;
        //     else {
        //         product*=nums[i];
        //     }
        // }
        // arr.push_back(product);
        // idx++;
        // }
        // return arr;
        int product = 1;
        int n = nums.size();
        vector<int> arr;
        for(int i=0; i<n; i++) arr.push_back(1);

        for(int i=0; i<n; i++){
            arr[i] = arr[i] * product;
            product = product * nums[i];
        }

        product = 1;
        for(int i=n-1; i>=0; i--){
            arr[i] = arr[i] * product;
            product = product * nums[i];
        }
    return arr;
    }
};