#include<stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
   char s[1000000];
   scanf("%s",s);
   int ln=strlen(s), flag=0;
   for(int i=0; i<ln-2; i++){
    if((s[i]=='1' && s[i+1]=='0' && s[i+2]=='1') || (s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') )
      flag=1;
   }
     if(flag==0)
        printf("Bad\n");
     else
        printf("Good\n");
    }
}
