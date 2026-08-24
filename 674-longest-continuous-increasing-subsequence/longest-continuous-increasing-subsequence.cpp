class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int temp = 1,ans = 1;
        int len = nums.size();
        for(int i = 1; i < len; i++){
            if(nums[i] > nums[i-1]){
                temp++;
                if(temp > ans){
                    ans = temp;
                }
            }else{
                temp = 1;
            }
        }
        return ans;
    }
};