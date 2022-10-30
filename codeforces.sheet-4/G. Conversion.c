#include <stdio.h>
#include <string.h>
int main()
{
    char s[100000];
    gets(s);
    int len=strlen(s);
  for(int i=0; i<len; i++){
    if(s[i]==',')
    printf(" ");
    else if(s[i]>='a' && s[i]<='z'){
        int up=s[i]-32;
        char result=up;
        printf("%c",result);
        }
    else{
        int low=s[i]+32;
        char result=low;
        printf("%c",result);
    }
  }
}
