class Solution {
public:
    string reverseWords(string s) {
        string str="";
        int e=0;
        int f=s.size()-1;
        if(e==f) return s;
        while(e<f && s[e]==' '){
            e++;
        }
        while(f>e &&  s[f]==' ') f--;
        if(e==f) return str=s[e];
        int j=f;
        int k;
        while(f>e){
            j=f;
            while(j>e && s[j]==' ') j--;
            f=j;
            while(j>e && s[j]!=' ') j--;
            if(j==e){
                while(j<=f){
                    str+=s[j];
                    j++;
                }
                break;
            }else{
                k=j;
                j++;
                while(j<=f){
                    str+=s[j];
                    j++;
                }
                str+=' ';
                f=k;
            }
        }
        return str;
    }
};