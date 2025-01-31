// User function template for C++
//https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1
class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
        if(n==1){
            return 1;
        }
        else{
            return n*n*n + sumOfSeries(n-1);
        }
    }
};
