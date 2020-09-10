//
//  main.c
//  pp8
//
//  Created by Jose Ignacio Biehl on 05.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <stdio.h>
void total_time(int mins[], int secs[], int n, int *sum_min, int *sum_sec){
    int mincount = 0;
    int scount = 0;
    for (int i = 0; i < n; i++){
        mincount += mins[i];
        scount +=secs[i];
    }
    mincount += scount/60;
    scount = scount % 60;

    *sum_min = mincount;
    *sum_sec = scount;

    return;
}




int main(int argc, const char * argv[]) {
    int mins[3] = {2, 4, 4};
    int secs[3] = {59, 59, 59};
    int sum_min = 0, sum_sec = 0;
    total_time(mins, secs, 3, &sum_min, &sum_sec);
    printf("%d:%d\n", sum_min, sum_sec);

    return 0;
}
