class Solution {
public:
    bool isPalindrome(string s) {
        string n;
        for(char i : s){
            if(isalnum(i)){
                n += tolower(i);
            }
        }
        int start = 0;
        int end = n.size()-1;
        while(start<end){
            if(n[start] != n[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
