#include <stdio.h>
#include <math.h>
int htoi(char a[]){
  int result=0,n=0,i,k=0;
  while(a[n++]);
  n--;
  for(i=n-1;i>=0;i--){
    if(a[i]>='A'&&a[i]<='F'){
      a[i] = a[i] - '0' - 7;
    }else if(a[i]>='a'&&a[i]<='f'){
      a[i] = a[i] - 87;
    }else if(a[i]>='0'&&a[i]<='9'){
      a[i] = a[i] - '0';
    }
    result += a[i]*pow(16,k++);
  }
  return result;
}
int main(){
  char hexa[100];
  int i,k;
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%s",hexa);
    printf("%d\n",htoi(hexa));
  }
  return 0;
}
