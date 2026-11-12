class Solution {
public:
    bool isAnagram(string s, string t){
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for(char ch: s){
            mp1[ch]++;
        }
        for(char ch: t){
            mp2[ch]++;
        }
        for(const auto& pair: mp1){
            if(mp2[pair.first] != pair.second){
                return false;
            }
        }
        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(const auto& s: strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            res[sorted].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& pair: res){
            result.push_back(pair.second);
        }
        return result;
    }
};
