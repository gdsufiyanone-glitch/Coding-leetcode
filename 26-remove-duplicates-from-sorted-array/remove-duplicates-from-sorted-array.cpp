class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // for(int i = 1 ; i < nums.size();i++){
        //     if(nums[i] == nums[i-1]){
        //         nums.erase(nums.begin()+i);
        //         i--;
        //     }
        // }
        // return nums.size();\

        // other approach
        int i = 0;
        int j = 1;
        while(j < nums.size()){
            if(nums[i] != nums[j]){
                i++;
                swap(nums[i],nums[j]);
            }
            j++;
        }
        return i+1;
    }
};