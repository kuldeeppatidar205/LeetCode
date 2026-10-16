class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string answer;
        int len1 = word1.length();
        int len2 = word2.length();
        for(int i =0;i<len1+len2;i++){
            if(len1>i)    answer += word1[i];
            if(len2>i)    answer += word2[i];
        }
        return answer;
    }
};