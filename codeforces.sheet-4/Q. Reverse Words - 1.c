#include <stdio.h>
#include <string.h>
int main() {

    char s[1000000];
    scanf("%s",s);
  printf("%s",strrev(s));
    while(scanf("%s",s)!=-1){
        printf(" %s",strrev(s));
    }
}


 
