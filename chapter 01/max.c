# include<stdio.h>

int main()
{
    /* code */
    int max(int x, int y);  //  调用前要先声明
    int min(int x, int y);
    int a, b, c, d;
    scanf("%d,%d", &a, &b); //  输入的
    c = max(a, b);          //  调用
    d = min(a, b);
    printf("max=%d\nmin=%d\n", c, d);
    return 0;
}

int max(int x, int y){
    int z;
    if (x > y) z = x;
    else z = y;
    return z;
}

int min(int x, int y){
    int z;
    if (x > y) z = y;
    else z = x;
    return z;
}