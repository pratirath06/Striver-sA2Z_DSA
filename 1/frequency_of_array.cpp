//Frequency in an array 
//https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0
class Solution {
public:

    bool isPalindrome(string s) {
    string n;
    for(char ch:s){
        if(isalnum(ch)){
            n+=tolower(ch);
        }
    }
    int lens = n.length();
    for(int i = 0;i<(int)lens/2;i++){
        if(n[i]!=n[lens-i-1]){
            return false;
        }
    }
    return true;
    }
};
