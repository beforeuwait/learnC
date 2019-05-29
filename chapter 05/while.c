# include<stdio.h>

/*
 do{} while (); 也就是无论如何都要执行一次
*/

int main1(){
    int i = 1;
    do {
        printf("%d\n", i);
        i ++;
        }
        while (i <= 10);
    return 0;
}

/*计算 1-100的加法*/

int main(){
    int i = 1, sum = 0;
    do{
        sum +=i;
        i++;
    }
    while (i<=100);
    printf("sum is:\t%d\n", sum);
    return 0;
}
