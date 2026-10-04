class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = size(nums);
        vector<vector<int>> arr;

        sort(nums.begin(),nums.end());

        for(int i=0; i<n-2 ; i++){
            if(i>0 and nums[i]==nums[i-1]) continue; //continue means next iteration of i

            int j = i+1;
            int k = n-1;

            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    arr.push_back({nums[i],nums[j],nums[k]});

                    while(j<k and nums[j]==nums[j+1]) j++;

                    while(j<k and nums[k] == nums[k-1]) k--;

                    j++; k--;
                }
                else if(sum>0) {
                    while(j<k and nums[k] == nums[k-1]) k--;
                    k--;
                }else if(sum<0){
                    while(j<k and nums[j]==nums[j+1]) j++;
                    j++;
                }
                
            
            }
        }
        return arr;
    }
};