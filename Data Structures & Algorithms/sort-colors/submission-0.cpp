class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++){
            int j=0, k=1;
            while(k < nums.size()){
                if(nums[j] > nums[k]){
                    int temp = nums[k];
                    nums[k] = nums[j];
                    nums[j] = temp;
                }
                j++; k++;
            }
            j=0; k=1;
        }
    }
};