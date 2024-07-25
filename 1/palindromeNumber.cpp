//Here is a link to the problem
//https://leetcode.com/problems/palindrome-number/description/
class Solution {
public:
    bool isPalindrome(int x) {
        int num=0,temp=x;
        if(x<0){
            return false;
        }
        else{
            for(;x!=0;){
                int ld = x%10;
                if(num>INT_MAX/10 || num<INT_MIN/10) return false;
                num = num*10 + ld;
                x/=10;
            }
        }
        if(temp==num){
            return true;
        }
        else{
            return false;
        }
    }
};
