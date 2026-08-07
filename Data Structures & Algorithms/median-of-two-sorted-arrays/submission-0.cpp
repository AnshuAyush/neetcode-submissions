class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v;
        int i = 0;
        int j = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] <= nums2[j]){
                v.push_back(nums1[i]);
                i += 1;
            }
            else{
                v.push_back(nums2[j]);
                j += 1;
            }
        }
        while(i < nums1.size()){
            v.push_back(nums1[i]);
            i += 1;
        }
        while(j < nums2.size()){
            v.push_back(nums2[j]);
            j += 1;
        }

        if(v.size() % 2 == 0){
            double a = v[v.size() / 2 ] + v[v.size() / 2 - 1];
            return a / 2;
        }
        return v[v.size() / 2];
    }
};