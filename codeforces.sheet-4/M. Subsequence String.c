#include <stdio.h>
#include <string.h>
int main()
{
    char s[100000]="hello";
    char t[100000];
    gets(t);
   int j=0, c=0;
   for(int i=0; i<strlen(t); i++){
     if(t[i]==s[j])
        j++;
     if(j==strlen(s))
        c=1;
   }
     if(c==0)
        printf("NO");
     else
        printf("YES");
}
