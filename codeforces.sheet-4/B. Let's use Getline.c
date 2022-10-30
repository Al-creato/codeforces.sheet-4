#include <stdio.h>
#include<string.h>
int main()
{
char s[10000000];
char ch='\\';
gets(s);
int len=strlen(s);
for(int i=0; i<len; i++){
    if(s[i]==ch)
        break;
    printf("%c",s[i]);
}
}
