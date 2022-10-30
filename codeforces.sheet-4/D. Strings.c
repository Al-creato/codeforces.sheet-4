#include <stdio.h>
#include <string.h>
int main()
{
  char s[100000], k[100000], x[100000];
gets(s);
 gets(k);
  int ln=strlen(s);
  int lln=strlen(k);
  printf("%d %d\n",ln,lln);
  strcat(x,s);
  strcat(x,k);
  puts(x);
 char temp=s[0];
  s[0]=k[0];
  k[0]=temp;
  printf("%s %s",s,k);
}
