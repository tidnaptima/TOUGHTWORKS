#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int mini(int input[],int y)
{
    int x=0;
    for(int i=0;i<y;i++)
    {
        if(x<input[i])
            x=input[i];
    }
    for(int i=0;i<y;i++)
    {
        if(input[i]!=0 && input[i]<x)
            x=input[i];
    }

    return x;
}

int ThirstyCrowProblem(int input1[],int input2,int input3)
{

    int x,x1=input2,sum=0;
    while(input3>0)
    {

        //printf("%d \t",x);
        for(int i=0;i<input2;i++)
        {
            if(input1[i]!=0)
            {
                input1[i]=input1[i]-x;
            }
        }
        sum=sum+(x1*x);
        input3--;
        x1--;
    }
    return sum;
}

int main()
{
    int x1[]={5,8,2,6};
    int x2=4,x3=2;
    int x4=ThirstyCrowProblem(x1,x2,x3);
    printf("%d",x4);
}
