#include <stdio.h>
#include <string.h>
int main()
{
    char first[1000000], second[1000000];
    scanf("%[^\n]%*c",first);
     scanf("%[^\n]%*c",second);
    int x=strcmp(first,second);
        if(x==-1)
        printf("%s",first);
    else
        printf("%s",second);

}
