class Solution {
public:
    bool check(string s,int i,int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
         int j=s.length()-1;
       
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                bool a=check(s,i,j-1);
                bool b=check(s,i+1,j);

                return a || b;
            }
        
        }
        return true;
    }
};