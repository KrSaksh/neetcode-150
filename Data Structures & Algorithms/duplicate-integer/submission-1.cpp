class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> frequency;
        for(int i = 0; i < nums.size(); i++) {
            frequency[nums[i]]++;
            if(frequency[nums[i]] > 1) {
                return true;
            }
        }
        return false;
    }
};