#include <cs50.h>
#include <stdio.h>

int main(void)
{
int n;
do
{
    n= get_int("Heigh: ");
    }
    while (n <= 0 || n >= 9);
    for (int i=0;i<n;i++)
    {
        for(int k=0;k<n-i-1;k++)
        {
        printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
           printf("#");
           }
        printf("\n");
    }
}