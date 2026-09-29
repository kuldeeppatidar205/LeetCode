class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freqmap;
        for(auto i :nums){
            freqmap[i]++;
        }
        for(auto const& [element,count]:freqmap){
            if(count > 1){
                return true;
            }
        }
        return false ;
    }
};