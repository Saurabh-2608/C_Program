#include <stdio.h>
#include <math.h>
int main() 
{
    int i, j, k, s, f;
    printf("Enter Start No. :");
    scanf("%d",&s);
    printf("Enter Finish No. :");
    scanf("%d",&f);
    for(i=n;i<=n1;i++)
    {
        k = 0;
        for(j=2;j<=i/2;j++) //or       for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
                k++;
        }
        if(k==0)
            printf("%d \n",i);
    }
	return 0;
}