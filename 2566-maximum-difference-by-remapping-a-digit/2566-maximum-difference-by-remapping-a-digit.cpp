class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num);
        int n=s.size();
        string n1=s,n2=s;
        char dig='a';
        for(int i=0;i<n;i++){
            if(s[i]!='9'){
                dig=s[i];
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(n1[i]==dig) n1[i]='9';
        }
        
        for(int i=0;i<n;i++){
            if(s[i]!='0'){
                dig=s[i];
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(n2[i]==dig) n2[i]='0';
        }
        return stoi(n1)-stoi(n2);
    }
};