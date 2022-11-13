#include <stdio.h>
#include <string.h>
int main() {

    char s[1000000];
    gets(s);
    int l=0, r=0;
    int len=strlen(s);
    while(l<len){
        while(r<len && s[r]!=' ')
            r++;
        for(int i=l, j=r-1; i<j; i++, j--){
          char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
         l=r+1;
         r=l;
    }
     printf("%s",s);
}
