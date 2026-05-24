class Solution {
   public:
    bool isPalindrome(string s) {
        vector<char> v;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 48 && s[i] <= 57) || (s[i] >= 65 && s[i] <= 90) ||
                (s[i] >= 97 && s[i] <= 122)) {
                v.push_back(tolower(s[i]));
            }
        
        }
        if(v.size()==0) return true;
        for (int i = 0; i < v.size() / 2; i++) {
            if (v[i] != v[v.size() - i - 1]) return false;
        }
        return true;
    }
};
