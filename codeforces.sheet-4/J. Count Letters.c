#include<stdio.h>
#include<string.h>
int main(){
    int a[26]={0};
    char str[10000000];
    scanf("%s",str);
    for(int i=0; i<strlen(str); i++){
      if(str[i]>=97 && str[i]<=122){
            a[str[i]-97]++;
        }
    }
    for(int i=0; i<26; i++){
        if(a[i]>0){
            printf("%c : %d\n",i+97,a[i]);
        }
    }
    return 0;
}
