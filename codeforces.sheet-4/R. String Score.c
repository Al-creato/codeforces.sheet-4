#include <stdio.h>
#include <string.h>
int main()
{
   char s[2000000];
   int n, sum=0;
   scanf("%d",&n);
   scanf("%s",s);
    int len=strlen(s);
   for(int i=0; i<len; i++){
    if(s[i]=='V')
        sum+=5;
    else if(s[i]=='W')
        sum+=2;
    else if(s[i]=='X')
        i++;
    else if(s[i]=='Y'){
        s[len]=s[i+1];
        i++;
        len++;
    }
     else if(s[i]=='Z'){
       if(s[i+1]=='W'){
        sum/=2;
        i++;
       }
        else if(s[i+1]=='V'){
            sum/=5;
            i++;
        }
       }
     }
     printf("%d",sum);
}
