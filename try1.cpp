#include<stdio.h>
#include<string.h>
void pro(char *x[])
{
    while(true)
    {
        char *x1=*x;
        if(x1[0]!='c')
            break;
        else
        {
            int i=1,x3=0,x2;
            while(x1[i]!='\0')
            {
                x2=x1[i];
                x3=x3*10+(x2-48);
                i++;
            }
            printf("%d \t",x3);
        }
        x++;
    }

}
int main()
{
    int i;
    char *A[]={"c2", "c5", "c7"};
    pro(&A[0]);

}
