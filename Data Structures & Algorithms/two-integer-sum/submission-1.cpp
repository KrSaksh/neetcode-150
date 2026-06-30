class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> count; 
        int i1 = -1, i2 = -1;
        for(int i = 0; i < nums.size(); i++) { // single-pass algorithm
            if(count.find(target - nums[i]) == count.end()) { 
                count[nums[i]] = i;
            }
            else {
                i1 = i;
                i2 = count[target - nums[i]];
                return {min(i1, i2), max(i1, i2)};
            }
        }
        return {};
    }
};
