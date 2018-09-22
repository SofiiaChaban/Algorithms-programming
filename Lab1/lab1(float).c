#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    printf("Enter a ");
    scanf("%f", &a);
    printf("Enter b ");
    scanf("%f", &b);

    c=(pow((a+b),3)-(pow(a,3)+3*pow(a,3)*b))/(3*a*pow(b,2)+pow(b,3)) ;

    printf("result %lf\n", c);
    return 0;
}