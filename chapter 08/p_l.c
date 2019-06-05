# include<stdio.h>
/*
输入一个 10个元素的数组，通过数组输出
*/
int main_old(){
    int a[10];  // 定义
    int *p;
    printf("输入10个数字");
    for (int i=0; i < 10; i++)
        scanf("%d", &a[i]);
    // 通过指针来输出
    for (p=a; p<(a+10); p++)
        printf("%d\t", *p);
    printf("\n");
    return 0;
}

int main1(){
    int a[10], *p, i;
    p = a;
    printf("输入10个数字");
    for (i=0; i < 10; i++)
        scanf("%d", p++);
    p = a;  //重新指向a
    for (i=0; i < 10; i++, p++)
        printf("%d\t", *p);
    printf("\n");
    return 0;
}
