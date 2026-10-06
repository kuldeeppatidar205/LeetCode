#include <vector>

class Solution {
public:
    std::vector<int> majorityElement(std::vector<int>& nums) {
        int max = nums.size() / 3;
        int first = 0, second = 0;
        int countOne = 0, countTwo = 0;

        for (int num : nums) {
            if (num == first) {
                countOne++;
            } else if (num == second) {
                countTwo++;
            } else if (countOne == 0) {
                first = num;
                countOne = 1;
            } else if (countTwo == 0) {
                second = num;
                countTwo = 1;
            } else {
                countOne--;
                countTwo--;
            }
        }
        countOne = 0;
        countTwo = 0;
        for (int num : nums) {
            if (num == first) countOne++;
            else if (num == second) countTwo++; 
        }

        std::vector<int> ans;
        if (countOne > max) ans.push_back(first);
        if (countTwo > max) ans.push_back(second);

        return ans;
    }
};