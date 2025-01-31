//https://www.geeksforgeeks.org/problems/reverse-an-array/0

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i = 0; i<(n/2);i++){
            arr[i]+=arr[n-i-1];
            arr[n-i-1]=arr[i]-arr[n-i-1];
            arr[i]-=arr[n-i-1];
        }
    }
};
