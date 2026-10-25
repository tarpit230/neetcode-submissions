class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlength = INT_MAX;
        int l=0, sum=0;
        for(int r=0; r<nums.size(); r++){
            sum += nums[r];
            while(sum >= target){
                minlength = min(minlength, r-l+1);
                sum -= nums[l];
                l++;
            }
        }
        return minlength == INT_MAX ? 0 : minlength;
    }
};