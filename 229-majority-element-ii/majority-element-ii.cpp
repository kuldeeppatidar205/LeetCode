class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        int n = nums.size();
        int max = n/3;
        for(int num:nums){
            mpp[num]++;
        }
        for(auto [key,count]:mpp){
            if(count > max){
                ans.push_back(key);
            }
        }
        return ans;
    }
};