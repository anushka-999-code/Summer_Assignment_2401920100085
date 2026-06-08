class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>fre(26,0);
        
        //count frequency of each character 
        for(char ch:s){
             fre[ch-'a']++;
            
        }
        //find first character with frequency 1
        for(int i=0;i<s.length();i++){
            if(fre[s[i]-'a']==1){
                return i; //returs index in string 
            }
        }
        return -1;//no unique char found 
    }
};