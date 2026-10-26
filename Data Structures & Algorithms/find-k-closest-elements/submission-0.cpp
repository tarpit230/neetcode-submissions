class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(arr[i]);
        }
        int l=0;
        for(int r=k; r<arr.size(); r++){
            if(abs((arr[r] -x)) < abs((arr[l] - x))){
                res.push_back(arr[r]);
                res.erase(res.begin());
                l++;
            }
        }
        return res;
    }
};