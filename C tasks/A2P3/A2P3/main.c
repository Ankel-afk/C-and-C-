/*
 CH-230-A
 a2 p3.[c or cpp or h]
 Jose Biehl
 jbiehl@jacobs-university.de
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int weeks;
    int days;
    int hours;
    // input for weeks, days and hours
    printf("weeks=");
    scanf("%d", &weeks);
    getchar();
    printf("days=");
    scanf("%d", &days);
    getchar();
    printf("hours=");
    scanf("%d", &hours);

    int result = hours + days*24 + weeks*24*7;
    // 1 day = 24 hours
    // 1 week = 7 days
    printf("total hours=%d\n", result);

    return 0;
}
