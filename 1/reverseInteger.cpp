//Here is the link to the question.
//https://leetcode.com/problems/reverse-integer/description/
class Solution {
public:
    int reverse(int x) {
        int num=0;
        while(x){
            int ld=x%10;
            if(num>INT_MAX/10 || num<INT_MIN/10) return 0;
            num=num*10+ld;
            x/=10;
        }
        return num;
    }
};
