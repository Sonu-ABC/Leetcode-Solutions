class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=1;i<n;i+=2){
             int temp=nums[i];
             nums[i]=nums[i-1];
             nums[i-1]=temp;
        }
        return nums;
    }
};