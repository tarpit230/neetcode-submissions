class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int maj = 0;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(const auto& pair: mp){
            if(pair.second > n/2){
                maj = pair.first;
                break;
            }
        }
        return maj;
    }
};