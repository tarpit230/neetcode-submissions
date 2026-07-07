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
        vector<vector<string>> ans;
        unordered_map<int, int> indices;
        for(int i=0; i<strs.size(); i++){
            vector<string> subList;
            if(indices.find(i) != indices.end()) continue;
            subList.push_back(strs[i]);
            indices[i]++;
            for(int j=i+1; j<strs.size(); j++){
                if(indices.find(j) != indices.end()) continue;
                if(isAnagram(strs[i], strs[j])){
                   subList.push_back(strs[j]);
                   indices[j]++; 
                }
            }
            ans.push_back(subList);
            subList.clear();
        }
        return ans;
    }
};
