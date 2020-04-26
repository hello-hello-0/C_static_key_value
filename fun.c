/*************************************************************************
  > File Name   : fun.c
  > Author      : Liu Junhong
  > Mail        : junliu@nvidia.com
  > Created Time: Sunday, April 26, 2020 AM10:29:16 HKT
 ************************************************************************/

#include <stdio.h>


int y = 10;
static int x = 0;

int f(){
    static int x = 1;
    printf("before modify, f(): x = %d\n", x);
    x = x+2;
    printf("after modify, f(): x = %d\n", x);
    return x;
}


int g() {
    static int  x = 2;
    printf("before modify, g(): x = %d\n", x);
    x = x + 2;
    printf("after modify, g(): x = %d\n", x);
    return x;
}


static int h() {

    static int x = 3;
    printf("before modify, h(): x = %d\n", x);
    x = x+3;
    printf("after modify, h(): x = %d\n", x);
    return x;
}

int call_h() {
    int x = h();
    return x;
}
