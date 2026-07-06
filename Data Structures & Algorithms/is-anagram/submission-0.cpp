class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> mp1, mp2;

        for (char c : s)
            mp1[c]++;

        for (char c : t)
            mp2[c]++;

        for (const auto& pair : mp1) {
            if (mp2[pair.first] != pair.second)
                return false;
        }

        return true;
    }
};