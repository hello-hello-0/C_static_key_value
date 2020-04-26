/*************************************************************************
  > File Name   : main.c
  > Author      : Liu Junhong
  > Mail        : junliu@nvidia.com
  > Created Time: Sunday, April 26, 2020 AM10:32:26 HKT
 ************************************************************************/

#include <stdio.h>

#include "fun.h"

extern int y;


int main(int argc, char **argv){

    printf("before modify global variable y: \ny=%d\n", y);
    y = y + 1;
    printf("after modify global variable y:\ny=%d\n", y);

    printf("\nfirst call f(): static local variable x: \n");
    f();
    printf("second call f(): static local variable x:\n");
    f();

    printf("\nfirst call g(): static local variable x:\n");
    g();
    printf("second call g(): static local variable x: \n");
    g();

    printf("\nfirst call cal_h():\n");
    call_h();
    printf("second call call_h():\n");
    call_h();

    //h(); //error

    return 0;
}
