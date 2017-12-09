# include <stdio.h>
void input (int * p);//声明函数
void paixu (int * p);
void print (int * p);
int main ()
{
        int a[10];
        input (a);
        paixu (a);
        print (a);
        return 0;
}
void input (int * p)//需要用指针地址
{
        int *q = p; //*******将数组的地址给q
        while (p < q + 10)//由于数组长度为10  切记 数组由0开始的
        {
                scanf("%d",p++);//**********给数组赋值
        }
}
void paixu (int * p)//排序函数
{
        int *q = p;//获取地址
        int *max = p,*min = p,tmp;//假设数组第一个为最大最小
        for (; p < q + 10; p++)//为何第一个参数省略了 注意“void paixu (int * p)”
        {
                if (*max < *p) //取地址所在的值比较  不是比较地址 是比较地址对应的值
                        max = p;
                if (*min > *p) //同理
                        min = p;
        }
        tmp = *q;//交换
        *q = *min;
        *min = tmp;
        if(max == q)//如果max的位置正好是第一个元素的地址，这是已经被改变了，所以要改成新地址。
        {
                max = min;
        }
        q+=9;
        tmp = *q;
        *q = *max;
        *max = tmp;
}
void print (int * p)
{
        int *q = p;
        while (p < q + 10)
        {
                printf("%d ",*p++);
        }
}
