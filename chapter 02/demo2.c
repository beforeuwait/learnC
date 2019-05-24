# include<stdio.h>

/*
计算多项式 1 -1/2 + 1/3 - 1/4 -........-1/100
*/

int main() {
    int t = 1;
    double a = 2.0, sum = 1.0;
    while(a <= 100){
        t = -t;
        sum += t/a;
        a += 1.0;
    }
    printf("result:\t%f\n", sum);
    return 0;
}