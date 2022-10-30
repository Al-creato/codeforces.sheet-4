#include<stdio.h>
#include <string.h>
int main()
{
     char s[1000];
    char ch[1000];
    gets(s);
    scanf("%s",ch);
    int s1=strlen(s);
    printf("%d", s1);
  int  s2=strlen(ch);
    printf(" %d",s2);
    printf("\n%s ",s);
    puts(ch);
    return 0;
}
