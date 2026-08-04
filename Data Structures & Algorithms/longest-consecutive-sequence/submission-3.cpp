class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n=nums.size();
       int maxLength = 1, curr = 1;
       if(nums.empty()) return 0;
       sort(nums.begin(), nums.end());
       for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == nums[i-1])
                continue;

            if(nums[i] == nums[i-1] + 1)
                curr++;
            else
                curr = 1;

            maxLength = max(maxLength, curr);
        } 
       return maxLength;
    }
};
