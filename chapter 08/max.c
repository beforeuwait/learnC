# include<stdio.h>

/*
比较两个输入的大小, 用指针
*/

int main(){
    int *p1, *p2, *p, a, b; 
    printf("please enter two integer numbers:\t");
    scanf("%d, %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b)  //直接在指针里解决了
        p = p1;
        p1 = p2;
        p2 = p;
    printf("a=%d, b=%d\n", a, b);
    printf("max=%d, min=%d\n", *p1, *p2);
    return 0;
}