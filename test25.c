#include <stdio.h>
#include <string.h>
int main()
{ char s[]="634,.%@\\w|sq2",c;
  int i,j,k,n=strlen(s);
//从以下开始答题
  for(i=0;i<n;i++){
	s[i] = s[i] - '0';				
 } 
 
  for(i=0;i<n;i++){
 	for(j=i;j<n;j++){
 		if(s[i]>s[j]){
 			c = s[i];
 			s[i] = s[j];
 			s[j] = c;
		 }
	 }
 }
 for(i=0;i<n;i++){
	s[i] = s[i] + '0';				
 }
 
 for(i=0;i<n;i++){
	printf("%c",s[i]);				
 }
   
return 0;
}

