class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        int maximum = 0;
        for(auto num:nums){
            set.insert(num);
        }
        for(auto num:set){
            if(set.contains(num-1)){
                continue;
                }
            int cur=1;
            while(set.contains(num+1)){
                num++;
                cur++;
                }
            if(maximum<cur){
                maximum = cur;
                }
        }
        return maximum;
    }
};