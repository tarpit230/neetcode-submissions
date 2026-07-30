class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> postfix(n);
        prefix[0] = 1;
        postfix[n-1] = 1;
        for(int i=0; i<n-1; i++){
            prefix[i+1] = prefix[i] * nums[i];
        }
        for(int i=n-1; i>0; i--){
            postfix[i-1] = postfix[i] * nums[i];
        }
        vector<int> output(n);
        for(int i=0; i<n; i++){
            output[i] = prefix[i] * postfix[i];
        }
        return output;
    }
};
