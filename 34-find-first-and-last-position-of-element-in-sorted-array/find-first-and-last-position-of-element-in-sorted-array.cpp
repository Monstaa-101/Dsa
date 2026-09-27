class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first=-1;
        int last=-1;
        int n = nums.size();
        int left = 0;
        int right = n-1;

        while(left<=right){
            int mid = left + (right - left)/2;
            if(nums[mid]==target){
                first = mid;
                right = mid-1;
            }
            else if(target<nums[mid]){
                right = mid-1;
            }
            else if(target>nums[mid]){
                left = mid+1;
            }
        }

        left =0;
        right = n-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid]==target){
                last = mid;
                left = mid+1;
            } 
            else if(nums[mid]>target){
                right = mid-1;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
        }
         
        return {first,last};
        
    }
};