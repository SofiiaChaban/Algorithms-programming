    #include <stdio.h>
    #include <math.h>

    int main() {
        int n,  fact = 1;
        double f, el;
        n = 1;

            for (double x = 0.1; x <= 1; x += 0.1) {
                double sum_n = 0;
                double sum_e = 0;
                f = sin(x);
                for(n=1;n<=11;n++){
                    fact=(2*n+1);
                    fact*=n; 
                }

                for (n = 0; n <= 11; n++) {
                    el = pow(-1, n) * (pow(x, (2 * n + 1)) / fact);
                    sum_n += el;
                }

                    do {
                        fact=(2*n+1);
                        fact*=n;
                        el = pow(-1, n) * (pow(x, (2 * n + 1)) / fact);
                        sum_e += el;
                        n++;
                    } while (el > 0.0001);
                    printf("|X = %e||SN = %e||SE = %e||Y = %e|\t\n",x , sum_n, sum_e, f);


            }

        return 0;
}
