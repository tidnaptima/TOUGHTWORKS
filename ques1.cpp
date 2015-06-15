#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

using namespace std;
void produ(char *x1[],char*x2[])
{
    int i1,i2;
    for(i1=0;;)
    {
        if(x1[i1][0]=='c')
            i1++;
        else
            break;
    }
    for(i2=0;;)
    {
        if(x2[i2][0]=='c')
            i2++;
        else
            break;
    }
    i2=i2-3;
    //printf("%d %d",i1,i2);
    int j1,j2,k1=0;
    char *str;
    long a1[i1];

    for(j1=0;j1<i1;j1++)
    {
        str=x1[j1];//address
        while(*str)
        {
            if(isdigit(*str))
            {
                long val=strtol(str,&str,10);
                a1[k1]=val;k1++;
                //printf("\n%ld\t",val);
            }
            else
                str++;
        }
    }
    long a2[i2][3];
    int k2=0,k3=0;
    for(j2=0;j2<i2;j2++)
    {
        k3=0;
        str=x2[j2];
        while(*str)
        {
            if(isdigit(*str))
            {
                long val=strtol(str,&str,10);
                a2[k2][k3]=val;
                k3++;
            }
            else
                str++;
        }
        k2++;
    }
   // printf("\n");
    long sum,max_val=0;
    for(int po=0;po<i1;po++)
    {
        sum=0;

        for(int po2=0;po2<i2;po2++)
        {
             if(a1[po]==a2[po2][0])
                sum=sum+a2[po2][2];
             if(a1[po]==a2[po2][1])
                sum=sum+a2[po2][2];

        }
        if(max_val<sum)
            max_val=sum;

    }

    printf("%ld",max_val);

}


int main()
{
    char *input1[]={"c2","c5","c7"};
    char *input2[]={"c1#c2#6","c2#c3#12","c2#c4#3","c3#c5#22","c3#c6#23","c4#c7#13","c5#c8#16","c6#c8#11","c6#c9#9","c7#c9#12","c9#c10#15","c8#c10#7"};
    produ(&input1[0],&input2[0]);
}
