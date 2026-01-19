class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt=0;
        for(char x:s){
            if(x==letter) cnt++;
        }
        return cnt*100/s.size();
    }
};