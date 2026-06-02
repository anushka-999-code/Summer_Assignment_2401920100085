class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0,max_sum;
        // first window created
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        max_sum=sum;
        // sliding window
        for(int i=k;i<nums.size();i++){
          sum+=nums[i];               // add current
          sum-=nums[i-k];         // remove previous elements (maintain size of moving subarray)
          max_sum=max(sum,max_sum);   //update max
        }
        // output in decimal
        return (double)max_sum/k;
    }
};