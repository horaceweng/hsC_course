#include <stdio.h>

int main(void)
{
    double pi;
    long double npi;

    pi = 3.14;
    printf("pi is %f\n", pi);
    /*which is incorrect
    printf("pi is %Lf now.\n", pi);
    printf("pi is %Le now.\n", pi);
    printf("pi is %lf now.\n", pi); 
    */

    npi = 3.1415926;
    printf("npi is %Lf now.\n", npi);
    printf("npi is %Le now.\n", npi);
    printf("npi is %lf now.\n", npi); /*which is incorrect*/

    printf("please enter a new number of pi:");
    scanf("%lf", &npi); 
    printf("npi is %f now.\n", pi);


    printf("please enter a new number of npi:");
    scanf("%Lf", &npi);
    printf("npi is %Lf now.\n", npi);
    printf("npi is %Le now.\n", npi);

    return 0;
}