class Solution {
public:
    void solve(string &s,int &size,int &index,int i,int j){
        int n=s.size();
        while(i>=0&&j<n){
            if(s[i]==s[j]){ 
                if(j-i+1>=size){
                    size=j-i+1;
                    index=i;
                }
                i--;
                j++;
            }
            else{
                break;
            }
        }
    }
    string longestPalindrome(string s) {
        int size=0;  
        int index=-1;  
        int n=s.size();   
        for(int i=0;i<n;i++){   
            solve(s,size,index,i,i); 
            solve(s,size,index,i,i+1); 
        }
        return s.substr(index,size);
    }
	
	
};