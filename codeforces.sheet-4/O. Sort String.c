#include <stdio.h>
#include <string.h>
#define ll long long int
int main()
{
   int arr[26]={0};
   ll n;
   int k;
   scanf("%lld",&n);
   char s;
   scanf("%c",&s);
   for(int i=0; i<n; i++){

   scanf("%c",&s);
    k=s-'a';
    arr[k]++;
    }
   for(int i=0; i<26; i++){
    for(int j=0; j<arr[i]; j++){
        printf("%c",i+'a');
    }
   }
}
