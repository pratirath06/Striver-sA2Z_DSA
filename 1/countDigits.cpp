//Here is the link to the question
//https://www.geeksforgeeks.org/problems/count-digits5716/1 
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count=0,temp=N;
        while(temp>0){
            int rem=temp%10;
            temp/=10;
            if(rem==0){
                continue;
            }
            if(N%rem==0){
                count+=1;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
