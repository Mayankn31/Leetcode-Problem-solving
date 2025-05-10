class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int c1=0,c2=0;
        long long s1=0;
        long long s2=0;
        long long res=0;
        for(int x:nums1) {
            if(x==0){
                s1++;
                c1++;
            }
            s1+=x;
        }
        for(int x:nums2) {
            if(x==0){
                s2++;
                c2++;
            }
            s2+=x;
        }
        if(c1==0 && s2>s1) return -1;
        if(c2==0 && s2<s1) return -1;
        return max(s1,s2);
    }
};