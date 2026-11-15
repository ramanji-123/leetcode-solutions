class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>stot,ttot;
        for(int i=0;i<=s.size();i++)
        {
            char cs=s[i];
            char ct=t[i];
            if(stot.count(cs)&&stot[cs]!=ct)
            {
                return false;
            }
        if(ttot.count(ct)&&ttot[ct]!=cs)
            {
                return false;
            }
            stot[cs]=ct;
            ttot[ct]=cs;
        }
        return true;
    }
};