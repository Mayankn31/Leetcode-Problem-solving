class Solution {
public:
    int countTime(string time) {
        int res=1;
        if(time[0]=='?'){
            if(time[1]!='?' && time[1]-'0'>=4) res*=2;
            else res*=3;
        }
        if(time[1]=='?'){
            if(time[0]=='2') res*=4;
            else if(time[0]=='?') res*=8;
            else res*=10;
        }
        if(time[3]=='?') res*=6;
        if(time[4]=='?') res*=10;
        return res;
    }
};