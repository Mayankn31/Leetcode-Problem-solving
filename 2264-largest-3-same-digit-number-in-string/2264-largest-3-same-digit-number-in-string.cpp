class Solution {
public:
    string largestGoodInteger(string num) {
        int cnt=1;
        char curr='a';
        string res;
        for(int i=1;i<num.size();i++){
            if(num[i]==num[i-1]) cnt++;
            else cnt=1;
            if(cnt==3){
                if(curr=='a') curr=num[i];
                else if(curr-'0'<num[i]-'0'){
                    curr=num[i];
                }
                else continue;
                res=num.substr(i-2,3);
            }
        }
        return res;
    }
};