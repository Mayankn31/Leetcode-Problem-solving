class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        vector<int>fre(26,0);
        for(char x:s){
            fre[x-'a']++;
            if(fre[x-'a']>((n+1)/2)) return "";
        }
        multimap<int,char,greater<int>>mp;
        for(int i=0;i<26;i++){
            int val=fre[i];
            if(val>0) mp.insert(make_pair(val,i+'a'));
        }
        vector<char>cur(n);
        int i=0;
        for(auto x:mp){
            int y=x.first;
            while(y>0){
                cur[i]=x.second;
                i+=2;
                y--;
                if(i>=n) i=1;
            }
        }
        string res="";
        for(int x:cur) res+=x;
        return res;
    }
};