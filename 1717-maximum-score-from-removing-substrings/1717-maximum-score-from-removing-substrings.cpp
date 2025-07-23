class Solution {
public:
    int maximumGain(string &s, int x, int y) {
        int count=0;
        if(x>y){
            for(int i=0;i<s.length();i++){
                if(s[i]=='a'&& s[i+1]=='b'){
                    count+=x;
                    s.erase(i,2);
                    i-=2;   
                    if(i<0){i=-1;}         
                }
            }
            for(int i=0;i<s.length();i++){
                if(s[i]=='b'&&s[i+1]=='a'){
                    count+=y;
                    s.erase(i,2);
                    i-=2;   
                    if(i<0){i=-1;}
             }
            }
        }
        else{
            for(int i=0;i<s.length();i++){
                if(s[i]=='b'&&s[i+1]=='a'){
                    count+=y;
                    s.erase(i,2);
                    i-=2;
                    if(i<0){i=-1;}
                }
            }
            for(int i=0;i<s.length();i++){
                if(s[i]=='a' && s[i+1]=='b'){
                    count+=x;
                    s.erase(i,2);
                    i-=2;               
                    if(i<0){i=-1;}           
                }
            }
        }
        return count;
    }
};