class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int balance = 0;
        for(auto num: nums){
            if(balance == 0){
                candidate = num;
            }
            if(num == candidate){
                balance++;
            }
            else{
                balance--;
            }
        }
        return candidate;
    }
};