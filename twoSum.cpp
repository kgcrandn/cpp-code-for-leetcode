class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int index = 0;
        unordered_map<int, int> map;
        
        for(int i : nums) {
            auto got = map.find(target - i);
            if(got != map.end())
                return {got->second, index}
            
            map[i] = index++;
        }

        return {};

/* code below. author: @kaskanoidas */
/*  
        for(int i = 0; i < nums.size(); i++) {
            const int& num = nums[i];
            const auto got = map.find(target - num);

            if(got != map.end())
                return {got->second, index};

            map[num] = i;
        }
        throw std::invalid_argument("No solution found");
*/
    }
};