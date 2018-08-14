#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*int per_cube(int n)
{
    int temp = pow(n,1/3);
    printf("%d",temp);
    if (temp==(int)(temp))
    {

        return 1;
    }
    else
        return 0;
}*/
int prime(int n)
{

    int i = 0,fact=0;
    for (i=2;i<=n;i++)
    {
        if (n%i==0)
            fact+=1;
    }
    if (fact==1)
        return 1;
    else
        return 0;
}
/*int main()
{
    // Read the numbers from the user and calculate the weights. Finally sort the weights.
    int i,un_sorted[]={64,23,72,45},sorted[4],temp=0,j=0;
    for (i=0;i<4;i++)
    {
        sorted[i]=0;
        if ((cbrt(un_sorted[i]))==(int)(cbrt(un_sorted[i])))
            sorted[i]+=5;
        if (prime(un_sorted[i]))
            sorted[i]+=3;
        if ((un_sorted[i]%4==0)&&(un_sorted[i]%6==0))
            sorted[i]+=4;
        else
            sorted[i]+=0;
    }
    //sorting
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            if(sorted[i]>sorted[j])
            {
                temp=sorted[i];
                sorted[i]=sorted[j];
                sorted[j]=temp;
                //sorting the given numbers
                temp=0;
                temp=un_sorted[i];
                un_sorted[i]=un_sorted[j];
                un_sorted[j]=temp;
            }
        }
    }
    for (i=0;i<4;i++)
    {
        printf("%d:%d\t",un_sorted[i],sorted[i]);
    }
    return 0;
}*/
