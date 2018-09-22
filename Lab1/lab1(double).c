#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    printf("Enter a ");
    scanf("%lf", &a);
    printf("Enter b ");
    scanf("%lf", &b);
    
    c=(pow((a+b),3)-(pow(a,3)+3*pow(a,3)*b))/(3*a*pow(b,2)+pow(b,3)) ;
    
    printf("result %lf\n", c);
    return 0;
    }