#include <stdio.h>
int main()
{
    int sum=0;
    for( int i=0; i<200;i+=2)
    {
        sum+=i;
    }
    printf("%d", sum);
    return 0;
}