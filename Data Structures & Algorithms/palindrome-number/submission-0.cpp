class Solution {
public:

    int revNum(int n)
    {   int lt = 0;
        int revNum = 0;
        while(n > 0)
        {
            lt = n % 10;
            revNum = revNum*10 + lt;
            n = n / 10;
        }
        return revNum;
    }
    bool isPalindrome(int x) {
        int temp = x;
        int rev = revNum(x);
        if(temp == rev) return true;
        return false;
    }
};