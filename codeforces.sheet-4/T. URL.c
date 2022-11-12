#include <stdio.h>
#include <string.h>
int main()
{
  char s[1000000];
  gets(s);
  for(int i=0; i<strlen(s); i++){
    if(s[i]=='?'){
        i++;
        for(int z=i; z<strlen(s); z++){
            if(s[z]== '='){
                printf(": ");
                continue;
                }
            if(s[z]== '&'){
                printf("\n");
                continue;
            }
            printf("%c",s[z]);
        }
    }
  }
}

