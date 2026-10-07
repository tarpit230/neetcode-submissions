class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int L = 0;
        int longest = 0;
        unordered_set<int> st;
        for(int R=0; R<s.size(); R++){
            while (st.find(s[R]) != st.end()) {
                st.erase(s[L]);
                L++;
            }
            st.insert(s[R]);
            longest = max(longest, R-L+1);
        }
        return longest;   
    }
};
