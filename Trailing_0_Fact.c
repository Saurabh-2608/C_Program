// Program to find the trailing zeroes in factorial of a number.
#include <stdio.h>

int main() 
{
    int n,i,j,count=0;
    printf("Enter the No. :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j = i;
        int f = 5;
        while(j%f==0)
        {
            count++;
            f*=5;
        }
    }
    printf("No. of trailing Zeroes in fact. of %d : %d",n,count);
	return 0;
}