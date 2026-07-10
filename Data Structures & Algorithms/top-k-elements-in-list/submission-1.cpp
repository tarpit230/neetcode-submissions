class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        while(k>0){
            int largest = INT_MIN, count = 0;
            for(const auto& pair: mp){
                if(find(ans.begin(), ans.end(), pair.first) == ans.end()){
                    if(pair.second > count){
                        count = pair.second;
                        largest = pair.first;
                    }
                }
        }  
        ans.push_back(largest);  
        k--;    
            } 
        
        
        return ans;
    }
};
