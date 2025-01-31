// User function Template for C++
//https://www.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0

class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        long long fact=1,i=1;
        vector<long long> vec;
        while(fact<=n){
            vec.push_back(fact);
            i++;
            fact*=i;
        }
        return vec;
    }
};
