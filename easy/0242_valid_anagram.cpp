class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
        {
            return false;
        }
        
        std::map<char, uint32_t> mapStrings;
        for (const auto letter : s)
        {
            const auto result = mapStrings.insert(std::make_pair(letter, 1));
            if (false == result.second)
            {
                result.first->second++;
            }
        }

        for (const auto letter : t)
        {
            const auto result = mapStrings.find(letter);
            if (mapStrings.end() != result)
            {
                result->second--;
            }

            if (0 == result->second)
            {
                mapStrings.erase(letter);
            }
        }

        return mapStrings.empty();
    }
};