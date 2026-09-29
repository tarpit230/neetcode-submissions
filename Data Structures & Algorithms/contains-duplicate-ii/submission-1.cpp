class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> st;
        int L = 0, R = 0;
        while(R < nums.size()){
            if(R-L > k) {
                st.erase(nums[L]);
                L++;
            }
            if(st.find(nums[R]) != st.end()){
                return true;
            }
            st.insert(nums[R]);
            R++;
        }
        return false;
    }
};