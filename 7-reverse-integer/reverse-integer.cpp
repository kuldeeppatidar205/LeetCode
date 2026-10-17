class Solution {
public:
    int reverse(int x) {
        int digit=0,remainder;
        int answer=0;
        while(x!=0){
            if(answer>INT_MAX/10 || answer<INT_MIN/10) return 0;
            remainder = x % 10;
            answer = answer*10 + remainder;
            x/=10;
        }
        return answer;
    }
};