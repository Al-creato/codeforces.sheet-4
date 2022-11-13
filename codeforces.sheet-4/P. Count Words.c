#include <stdio.h>
#include <string.h>
int main()
{
   char s[1000000];
   gets(s);
   int flag=0, count=0, len=strlen(s);
   for(int i=0; i<len; i++){
    if((s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z')){
        if(flag==0){
            count++;
            flag=1;
      }
    }
     else
        flag=0;
   }
    printf("%d",count);
}



 
