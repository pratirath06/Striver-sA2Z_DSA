//https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1

class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        //Your code here
        if(N){
            printNos(N-1);
            cout<<N<<" ";
        }
    }
};
