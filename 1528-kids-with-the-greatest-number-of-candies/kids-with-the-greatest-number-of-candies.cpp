class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> answer;
        int maxi=0;
        for(int i =0;i<candies.size();i++){
            maxi = max(maxi,candies[i]);
        }
        for(int i =0;i<candies.size();i++){
            if(candies[i]+extraCandies >= maxi){
                answer.push_back(true);
            }
            else{
                answer.push_back(false);
            }
        }
        return answer;
    }
};