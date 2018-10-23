#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[10]={};
    int m[10]={};
    int c[10]={};
    for(int i=0;i<10;i++){
        a[i]= rand()%20;
        printf(" %d |",a[i]);
    }
    printf(" - massive with 0\n");
    for(int i=0;i<10;i++) {
        if (a[i] == 0) {
            m[i]=a[i+1];
            i+=1;
        }
        m[i] = a[i];
        printf(" %d |", m[i]);
    }
    int n=0;
    printf("\n");
       for(int i=0;i<10;i++) {
           c[i]=m[i];
           if (n==0){


           if (m[i] % 2 == 0) {

               c[i + 1] = m[i - 1] + 2;
               n+=1;
           }}
           printf("%d |",c[i]);
       }





    printf(" - result\n");
    return 0;
}