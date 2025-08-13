class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_to_index; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // check if complement already exists
            if (num_to_index.find(complement) != num_to_index.end()) {
                return { num_to_index[complement], i };
            }
            
            // store current number with its index
            num_to_index[nums[i]] = i;
        }

        return {}; // should never reach here because one solution is guaranteed
    }
};
