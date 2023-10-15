class Solution {
public:
    bool isPalindrome(string s) {
       int a=0;
       int e=s.size()-1;
       while(a<=e){
           if(!isalnum(s[a])){a++; continue;}
           if(!isalnum(s[e])){e--;continue;}
           if(tolower(s[a])!=tolower(s[e]))return false;
           else{
               a++;
               e--;
           }
       }
       return true;
}
};