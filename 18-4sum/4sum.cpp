class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() < 4) return {};
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i =0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            long long min_sum =(long long ) nums[i]+nums[i+1]+nums[i+2]+nums[i+3];
            if(min_sum >target) break;
            long long max_sum =(long long) nums[i]+nums[n-1]+nums[n-2]+nums[n-3];
            if(max_sum <target) continue;

            for(int j =i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;

                long long sub_min = (long long)nums[i] + nums[j] + nums[j+1] + nums[j+2];
                if(sub_min > target) break;
                long long sub_max =(long long)nums[i] + nums[j] + nums[n-1] + nums[n-2];
                if(sub_max < target) continue;

                int left = j+1;
                int right = n-1;
                while(left< right){
                    long long current_sum =(long long) nums[i] + nums[j] + nums[left] + nums[right];
                    
                    if(current_sum == target){
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                        while(left < right && nums[left+1]==nums[left]) left++;
                        while(left < right && nums[right-1]==nums[right]) right--;
                        left++;
                        right--;
                    }
                    else if(current_sum <target){
                            left++;
                        }
                    else{
                            right--;
                        }
                    
                }
            }
        }
        return ans;
    }
};