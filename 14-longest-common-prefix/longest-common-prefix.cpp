class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str1 = strs[0];
        int len = strs.size();
        for(int i = 1;i < len;i++ ){
            string temp = "";
            int j;
            for(j = 0 ; j < min(strs[i].length(),strs[i-1].length()) ;j++){
                if(strs[i][j] != strs[i-1][j]){
                    break;
                }
            }
            if(j < str1.length())
                str1 = str1.substr(0,j);
        }
        if(str1.empty())
        return "";

        return str1;
        
    }
};