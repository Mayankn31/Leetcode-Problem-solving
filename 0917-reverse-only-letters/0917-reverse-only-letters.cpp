class Solution {
public:
    bool checkEng(char c){
        int A=c-'A';
        int a=c-'a';
        return (A>=0 && A<26) || (a>=0 &&a<26);
    }
    string reverseOnlyLetters(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(!checkEng(s[i])) i++;
            else if(!checkEng(s[j])) j--;
            else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};