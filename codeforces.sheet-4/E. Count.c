#include<stdio.h>
#include <string.h>
int main()
{
char s[1000000];
int sum=0;
scanf("%s",s);
int ln=strlen(s);
for(int i=0; i<ln; i++)
 sum+=s[i]-'0';
printf("%d",sum);
}
