#include <stdio.h>
#include <math.h>
int main()
{
  int i,m,s=0;
  for (i = 100; i <= 999; i++) {
    if(((i%10)*(i%10)*(i%10)+(i/100)*(i/100)*(i/100)+(i/10%10)*(i/10%10)*(i/10%10))==i){
      printf("%5d",i);
    }
  }

  return 0;
}
