# include <stdio.h>

/*
     计算5的阶乘
*/
int main(){
    int i, t;
    t = 1;
    i = 1;
    while (i <= 5){
        t *= i;
        i += 1;
    }
    printf("5! = %d\n", t);
    return 0;
}

