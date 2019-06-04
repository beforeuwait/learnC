# include<stdio.h>

int main(){
    int a = 100, b = 10;
    int *pointer_1, *pointer_2;     //这里仅仅是定义 指针变量, 同时关于指向基类型, 指向是什么类型就要定义什么类型
    pointer_1 = &a;
    pointer_2 = &b;
    printf("a=%d,b=%d\n", a, b);
    printf("*pointer_1 = %d, *pointer_2=%d\n", *pointer_1, *pointer_2);  // 这里的 * 是指 指向
    return 0;
}