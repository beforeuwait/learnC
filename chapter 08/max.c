# include<stdio.h>

/*
比较两个输入的大小, 用指针
*/

int main2(){
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

void swap(int *a, int *b){  //交换指向的地址
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    void swap(int *p1, int *p2);
    int a, b;
    int *p1, *p2;
    printf("输入两个数字\n");
    scanf("%d, %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b) swap(p1, p2);    // 通过指针来交换值
    printf("max=%d, min=%d\n", a, b);
    return 0;
}