# include<stdio.h>

int main()
{
    /* code */
    int max(int x, int y);  //  调用前要先声明
    int a,b,c;
    scanf("%d,%d", &a, &b); //  输入的
    c = max(a, b);          //  调用
    printf("max=%d\n", c);
    return 0;
}

int max(int x, int y){
    int z;
    if (x > y) z = x;
    else z = y;
    return z;
}