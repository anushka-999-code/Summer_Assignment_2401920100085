class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        if(s.length()!=t.length()){
            return false;
        }
        for(int a:s){
            mp[a]++;
        }
        for(int a:t){
            mp[a]--;
        }
        for(auto p:mp){
            if(p.second!=0){
                return false;
            }
        }
        return true;
    }
};