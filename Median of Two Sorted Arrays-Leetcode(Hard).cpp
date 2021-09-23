class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        double median=0;
        vector<int> c;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j])
                c.push_back(nums1[i++]);
            else
                c.push_back(nums2[j++]);
        }
        while(i<n1){
            c.push_back(nums1[i++]);
        }
        while(j<n2){
            c.push_back(nums2[j++]);
        }
        int n=c.size();
        if(n%2!=0)
        n=n/2;
        else
            n=(n-1)/2;
        median=(c[n]+c[n+1]);
        median/=2;
        return median;
    }
};
