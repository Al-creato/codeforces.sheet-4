#include <stdio.h>
#include<string.h>
int main()
{
char s[1000000];
char k[1000000];
gets(s);
gets(k);
int ln=strlen(s);
int lln=strlen(k);
 int mini=ln;
 if(mini>lln)
    mini=lln;
int c=1;
 for(int i=0; i<mini; i++){
    if(s[i]<k[i]){
        printf("%s",s);
        c=0;
    break;
 }
  if(k[i]<s[i]){
    printf("%s",k);
    c=0;
    break;
  }
}
 if(c==1){
    if(ln<=lln)
       printf("%s",s);
    else
        printf("%s",k);
 }
}
