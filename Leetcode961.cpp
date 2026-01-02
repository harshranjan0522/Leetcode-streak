class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxm=nums.back();
        vector<int> count(maxm+1, 0);
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }   
        int max=0;
        int ans=0;
        for(int i=0;i<count.size();i++){
            if(max<count[i]){
                max=count[i];
                ans=i;
            }
        }
        return ans;
    }
};
