
// Question Link - https://leetcode.com/contest/biweekly-contest-62/problems/maximize-the-confusion-of-an-exam/
class Solution {
public:
    int getMaxConsecutive(string s,int k,int ch1,int ch2)
    {
        int cnt=0;
        int j=0;
        int maxi=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==ch2)
            {
                cnt++;
            }
            while(cnt>k && j<s.size())
            {
                if(s[j]==ch2)
                {
                    cnt--;
                }
                j++;
            }
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        
        int ans1=0;
        int ans2=0;
        ans1=getMaxConsecutive(answerKey,k,'T','F');
        ans2=getMaxConsecutive(answerKey,k,'F','T');
        return max(ans1,ans2);
    }
};