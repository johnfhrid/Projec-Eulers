#include <stdio.h>

int main()
{
    //AMICABLE NUMBERS UNDER 10000

    for(int i=1;i<=10000;i++)
    {
        int n=i,n1=0, temp=n, fact=1, fact1=1, sum=0, sum1=0;
        for(fact=1;fact<=n/2;fact++)
        {
            if(n%fact==0)
            {
                sum+=fact;
            }
        }
        n1=sum;
        //printf("%d : ", n1);
        //checks the factors of n1
        for(int fact1=1; fact1<=n1/2;fact1++)
        {
            if(n1%fact1==0)
            {
                sum1+=fact1;
            }
        }
        //printf("%d\n", sum1);
        if(temp==sum1 && n1!=temp)
        {
            printf("%d : %d\n  ", n1, sum1);
            //printf("Number is an Amicable Number\n");
        }
    }
    return 0;
}