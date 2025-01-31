//https://leetcode.com/problems/frequency-of-the-most-frequent-element/

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left= 0;
        long curr=0;
        int best=0;
        int n = nums.size();
        for(int right = 0;right<n;right++){
            long target = nums[right];
            
            curr+=target;
            while((right-left+1)*target - curr > k){
                curr-=nums[left];
                left++;
            }
            best=max(best,right-left+1);

        }
        return best;
    }
};
