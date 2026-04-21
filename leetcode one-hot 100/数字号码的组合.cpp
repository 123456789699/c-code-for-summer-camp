class Solution {
public:
    void dfs(vector<string>& res,string digits,string& output,unordered_map<char,vector<char>> mp,int first,int len){
        if(first==len){
            res.push_back(output);
            return ;
        }
        for(int i=0;i<mp[digits[first]].size();i++){
            output[first]=mp[digits[first]][i];
            dfs(res,digits,output,mp,first+1,len);
        }


    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,vector<char>> mp;
        vector<string> res;
        string output(digits.size(), ' ');
        mp['2']=vector<char> {'a','b','c'};
        mp['3']=vector<char> {'d','e','f'};
        mp['4']=vector<char> {'g','h','i'};
        mp['5']=vector<char> {'j','k','l'};
        mp['6']=vector<char> {'m','n','o'};
        mp['7']=vector<char> {'p','q','r','s'};
        mp['8']=vector<char> {'t','u','v'};
        mp['9']=vector<char> {'w','x','y','z'};
        dfs(res,digits,output,mp,0,(int)digits.size());
        return res;
    }
};
