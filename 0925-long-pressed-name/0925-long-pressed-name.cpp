class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0,j=0;
        int m=name.size();
        int n=typed.size();
        while(i<m && j<n){
            if(name[i]==typed[j]){
                i++;
                j++;
            }
            else if(j>0 && typed[j]==typed[j-1]) j++;
            else return false;
        }
        if(i!=m) return false;
        while(j>0 && j<n){
            if(typed[j]!=typed[j-1]) return false;
            j++;
        }
        return true;
    }
};