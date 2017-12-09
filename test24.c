 #include <stdio.h>
int main()
{
        int x,y,z,k=0;
        for(x=-50; x<50; x++) {
                for(y=-50; y<50; y++) {
                        for(z=-50; z<50; z++) {
                                if(x*x+y*y+z*z ==2000) {
                                        k+=1;
                                }
                        }
                }
        }
        printf("%d",k);
        return 0;
}
