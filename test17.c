#include <stdio.h>
int main() {
 	int i;
	float f1=1.0,f2=2.0,t1=2.0,t2=3.0,s;
	float f,t; s=t1/f1+t2/f2;
  	for(i=0;i<19;i++){
		t1 = t1 + t2;
		f1 = f1+f2;
		t2 = t1 + t2;
		f2 = f1+f2;
  		s+=	(t1/f1)+(t2/f2);
	}
	printf("%.3f",s);
  return 0;
}
