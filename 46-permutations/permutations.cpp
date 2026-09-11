class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> temp;
        sort(nums.begin(),nums.end());
        temp.emplace_back(nums);
        while(next_permutation(nums.begin(),nums.end())){
            temp.emplace_back(nums);
        }
        return temp;
        
    }
};