#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
  char value[n];
 scanf("%s",value);
 char temp;
  int count=0;
for(int i=0; i<n; i++){
  if(i==0){
   temp=value[i];
  count++;
  }
  else{
    if(value[i]!=temp){
      count++;
      temp=value[i];
    }
  }
}
 printf("%d",count);

}


 
