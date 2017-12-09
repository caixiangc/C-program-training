#include <stdio.h>
#include <math.h>
#define len(x1,y1,x2,y2) sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))

int main()
{int i,j;
float c,minc;
float x[]={1.1,3.2,-2.5,5.67,3.42,-4.5,2.54,5.6,0.97,4.65};
float y[]={-6,4.3,4.5,3.67,2.42,2.54,5.6,-0.97,4.65,-3.33};
minc = (x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]);
for(i=0;i<10;i++){
  for(j=i+1;j<10;j++){
    c = sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
    if(minc>c){
      minc = c;
    }
  }
}
printf("%.3f",minc);
return 0;
}
