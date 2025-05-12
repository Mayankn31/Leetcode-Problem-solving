class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n=digits.size();
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i==j || i==k || j==k) continue;
                    if(digits[i]>0 && digits[k]%2==0) 
                        st.insert(digits[i]*100+digits[j]*10+digits[k]);
                }
            }
        }
        vector<int>res;
        for(int x:st) res.push_back(x);
        sort(res.begin(),res.end());
        return res;
    }
};