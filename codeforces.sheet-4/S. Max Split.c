#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000];
    gets(s);
    int l=0, r=0, c=0, a=0;
    for(int i=0; i<strlen(s); i++){
        if(s[i]=='L')
            l++;
        else
            r++;
        if(l==r)
            c++;
    }
      printf("%d\n",c);
     for(int i=0; i<strlen(s); i++){
         if(s[i]=='L')
            l++;
        else
            r++;
        if(l==r){
            for(int j=a; j<=i; j++)
                printf("%c",s[j]);
            printf("\n");
            a=i+1;

        }
     }
}
 
