#include <stdio.h>
#include <math.h>

int main()
{
    double m,n,a,b,c;
    printf("Enter n");
    scanf("%lf", &n);
    printf("Enter m");
    scanf("%lf", &m);
    a=n---m; 
    printf("Result=%lf\n",a);
    printf("Enter n");
    scanf("%lf", &n);
    printf("Enter m");
    scanf("%lf", &m);
    b=m--<n;
    printf("Result=%lf\n",b);
    printf("Enter n");
    scanf("%lf", &n);
    printf("Enter m");
    scanf("%lf", &m);
    c=n++>m;
    printf("Result=%lf\n",c);
    
    return 0;
    }