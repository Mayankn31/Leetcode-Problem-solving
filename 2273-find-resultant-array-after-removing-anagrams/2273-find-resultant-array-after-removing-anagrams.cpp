class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> res;
        string prev=words[0];
        res.push_back(words[0]);
        sort(prev.begin(),prev.end());
        for(int i=1;i<words.size();i++){
            string cur=words[i];
            sort(cur.begin(),cur.end());
            if(cur!=prev) res.push_back(words[i]);
            prev=cur;
        }
        return res;
    }
};