class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n, 1);
        int i=1;
        for(int j=0;j<n;j++){
            result[j]=i;
            i*=nums[j];
        }
        int a=1;
        for(int k=n-1;k>=0;k--){
            result[k]*=a;
            a*=nums[k];
        }
        return result;
    }
};
