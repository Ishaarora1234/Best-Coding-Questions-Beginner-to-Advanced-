class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int n=nums.size(),i,sum=0;
        for(i=0;i<=n-2;i++)
        {
            sum=sum+nums[i];
            i++;
        }
        return sum;
    }
};
