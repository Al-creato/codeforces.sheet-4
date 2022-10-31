#include <stdio.h>
#include <string.h>
int main()
{
    char x[100000];
    gets(x);
    char k[100000];
    int len=strlen(x);
    for(int j=0, i=len-1; i>=0; i--,j++){
        k[j]=x[i];
    }
     int d=strcmp(x,k);
     if(d==0)
        printf("YES");
        else
        printf("NO");
}

