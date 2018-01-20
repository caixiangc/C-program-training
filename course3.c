#include <stdio.h>
int main(int argc, char* argv[])
{
        int i,j,m,z,l;
        for(i=2; i<=100; i++)
        {
                if(i%2==0)
                        for(j=2; j<100; j++) {
                                for(m=2; m<j; m++)
                                        if(j%m==0)
                                                break;
                                if(j==m)
                                        z=i-j;
                                for(l=2; l<z; l++)
                                        if(z%l==0)
                                                break;
                                if(z==l) {
                                        printf("%d=%d+%d\n",i,j,z);
                                        break;
                                }
                        }
        }
        printf("\n");
        return 0;
}
