class Solution {
public:
    bool vow(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }
    bool isValid(string word) {
        int n=word.size();
        bool len=n>=3;
        int v=0,c=0;
        for(char x:word){
            if((x>='0'&&x<='9')||(x>='a'&&x<='z')||(x>='A'&&x<='Z')){
                if(vow(x)) v++;
                else if((x>='0'&&x<='9')) continue;
                else c++;
            }
            else return false;
        }
        bool vo=v>0;
        bool co=c>0;
        return vo&&co&&len;
    }
};