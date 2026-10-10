class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size() -1;
        int curr = 0,ans = 0;
        while(low <= high){
            int len = min(height[low],height[high]);
            int bre = high - low;
            curr = len*bre;
            ans = max(ans,curr);
            if(height[low]<=height[high]){
                low++;
            }
            else{
                high--;
            }
        }
        return ans;
    }
};