class Solution {
public:
    bool isAnagram(string &s, string &t) {
        if(s.size()!=t.size()) return false;
        int array1[26]={0};
        for(char c:s){
            array1[c-'a']++;
        }
        for(char c:t){
            array1[c-'a']--;
        }
        for(int count : array1){
            if(count != 0) return false;
        }
        return true;
    }
};
