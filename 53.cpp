class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0,max = INT_MIN;
        for(int i = 0; i<nums.size();i++){
          sum = sum+nums[i];

          if(sum>max){
            max = sum;
          }
          if(sum<0){
            sum=0;
          }

        }
        return max;
    }
};


input:-[-2,1,-3,4,-1,2,1,-5,4]
  output:-6
