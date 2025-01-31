// Function to return minimum number of jumps to end of array
//https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(arr[0]==0){
            return -1;
        }
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(arr[0]>=n-1){
            return 1;
        }
        int maxstep=arr[0];
        int furthest=arr[0];
        int jump = 1;
        for(int i = 0;i<n;i++){
            maxstep=max(maxstep, i+arr[i]);
            if(i==furthest){
                jump++;
                furthest = maxstep;
                if(furthest>=n-1){
                return jump;
                }
            }
            if(i>maxstep){
                return -1;
            }
            
        }
        return -1;
    }
};
