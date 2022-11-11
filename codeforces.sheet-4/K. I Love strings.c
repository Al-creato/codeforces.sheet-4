#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
  char s[10000],k[10000], x[10000];
  scanf("%s%s",s,k);
  strcat(x,s);
  strcat(x,k);
  int flag1=1, flag2=2;
  for(int i=0; i<strlen(x); i++){
    if(strlen(s)!=i && flag1)
     printf("%c",s[i]);
     else
     flag1=0;
    if(strlen(k)!=i && flag2)
     printf("%c",k[i]);
    else
    flag2=0;
  }
  printf("\n");
    }
}
