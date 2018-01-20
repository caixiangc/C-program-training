#include <stdio.h>
struct worker{
  char name[20];
  float dSalary;
  int wDay;
  float allPay;
};
int main(){
  struct worker person[10],temp;
  int i,j;
  for(i=0;i<10;i++){
    scanf("%s%f%d%f",person[i].name,&person[i].dSalary,&person[i].wDay,&person[i].allPay);
  }
  for(i=0;i<10;i++){
    person[i].allPay = person[i].dSalary*person[i].wDay;
  }
  for(i=0;i<10;i++){
    for(j=0;j<(9-i);j++){
      if(person[j].allPay<person[j+1].allPay){
        temp = person[j];
        person[j] = person[j+1];
        person[j+1] = temp;
      }
    }
  }
  for(i=0;i<10;i++){
    printf("%s %.1f %d %.1f\n",person[i].name,person[i].dSalary,person[i].wDay,person[i].allPay);
  }
  return 0;
}
