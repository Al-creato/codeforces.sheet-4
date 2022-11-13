#include<stdio.h>
#include<string.h>
int main()
{
    char k[1000000];
    gets(k);
    for(int i=0; i<strlen(k); i++){
     if(k[i]=='E' && k[i+1]=='G' && k[i+2]=='Y' && k[i+3]=='P' && k[i+4]=='T'){
          i+=4;
            printf(" ");
        }
         else
            printf("%c",k[i]);
    }

}
