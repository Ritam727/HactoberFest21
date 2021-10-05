//QUESTION: https://leetcode.com/problems/palindrome-number/

class Solution
{
public:
    bool isPalindrome(int n)
    {

        if (n < 0 || (n % 10 == 0 && n != 0))
        {
            return false;
        }
        int reverse_num = 0;
        while (n > reverse_num)
        {
            reverse_num = (reverse_num * 10) + (n % 10);
            n = n / 10;
        }
        return n == reverse_num || n == reverse_num / 10;
    }
};