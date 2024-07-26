//Here is a link to the code
//https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long a=max(A,B),b=min(A,B);
        while(b!=0){
            long long tempa=a;
            a=b;
            b=tempa%b;
        }
        b=A*B/a;
        return {b, a};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
