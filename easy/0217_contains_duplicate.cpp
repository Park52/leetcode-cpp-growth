class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> setNums;
        for (const auto num : nums)
        {
            const auto result = setNums.insert(num);
            if (false == result.second)
            {
                return true;
            }
        }
        return false;
    }
};