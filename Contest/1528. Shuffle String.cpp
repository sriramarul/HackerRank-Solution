class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> mp;
        map<int,char>::iterator itr; 
        
        for(int i=0;i<indices.size();i++){
            mp.insert(pair<int,char>(indices[i],s[i]));
        }
        string finalString="";
         for (itr = mp.begin(); itr != mp.end(); ++itr) { 
       
             finalString=finalString+itr->second;
    } 
        return finalString;
    }
};