class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() == t.length()){ 
            string a = s;
            string b = t;
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());

            if (a == b) {
                return true;
            }
        }
        
    return false;
    }
};