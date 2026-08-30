class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums[0] >= target) return 0;
        else if(nums[nums.size() - 1] < target) return nums.size();
        else if(nums[nums.size() - 1] == target) return nums.size() - 1;
        int left=0,right = nums.size() - 1;
        while(left <= right){
            int mid = (left + right)/2;
            if(nums[mid] == target){
                return mid;
            }else if (nums[mid] > target && nums[mid - 1] < target){
                return mid;
            }else if (nums[mid] > target){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return 0;
    }
};