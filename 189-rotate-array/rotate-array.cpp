class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector <int> subArray(nums.end() - k, nums.end());    
        nums.erase(nums.end() - k, nums.end());
        nums.insert(nums.begin(), subArray.begin(), subArray.end()); 
    }
};