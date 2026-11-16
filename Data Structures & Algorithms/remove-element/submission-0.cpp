class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int n = nums.size();
      for(int i=0; i<n; i++){
        int j = i;
        if(nums[i] == val){
            while(j < n-1 && nums[++j] == val){
                continue;
            }
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
        }
      }
      int k=0;
      for(int i=0; i<n; i++){
        if(nums[i] == val) break;
        k++;
      }
      return k;  
    }
};