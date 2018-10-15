#include <stdio.h>
#include <math.h>
int main() 
{
    int i, j, k, s, f=0;
    printf("Enter n :");
    scanf("%d",&s);
    for(i=2;;i++)
    {
        k = 0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
                 k++;
        }
        if(k==0)
        {
            f++;
            if(f==s)
                break;
        }
     }
     printf("%d\n",i); 
	return 0;
}