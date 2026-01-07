class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int size=n+m;
        vector<double> arr(size);
        int a=0;
        for(int i=0;i<n;i++){
            arr[i]=nums1[i];
            a++;
        }
        for(int j=0;j<m;j++){
            arr[a]=nums2[j];
            a++;
        }
        sort(arr.begin(), arr.end());
        if(size%2!=0){
            int m=(0+size)/2;
            return arr[m];
        }else{
            int m=(0+size)/2;
            double avg=(arr[m]+arr[m-1])/2;
            return avg;
        }
    }
};
