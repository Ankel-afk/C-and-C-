/*
 CH-230-A
 a5 p11.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/*topmost if statements are the non-standard primes
 and corner cases, function will recursively try to
 divide n by d until d reaches 1, d will be the rounding of
 the square root of n (to optimize). if d reaches 1, it means
 that n was not divisible by any d, so the function returns 1.
 */
int isPrime(int n, int d){
    if (n == 1){
        return 0;
    }
    else if (n == 2){
        return 1;
    }
    else if (d == 1){
        return 1;
    }
    else if (n % d == 0 ){
        return 0;
    }
    else{
        return isPrime(n, d-1);
    }
}
int main(int argc, const char * argv[]) {
    int x;
    scanf("%d", &x);
    int a = isPrime(x, round(sqrt((double)x)));
    if (a==1){
        printf("%d is prime\n", x);
    }
    else{
        printf("%d is not prime\n", x);

    }
    
 return 0;
}
