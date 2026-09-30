class Solution {
public:
    int strStr(string haystack, string needle) {
    //int i;
    //for(int i=0; needle[i]!='\0' ;i++){}
    
    for(long int j=0; haystack[j]!='\0'; j++){
        long int i = 0, k = j;
        while(haystack[k]==needle[i]){
            if(needle[i+1]=='\0') return j;
            i++;
            k++;
        }
    }
    return -1;}
};