# include<stdio.h>

int main(){
    void exchange(int *q1, int *q2, int *q3);
    int a, b, c, *p1, *p2, *p3;
    printf("输入三个数字\n");
    scanf("%d, %d, %d", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    exchange(p1, p2 , p3);
    printf("排序后的结果:t %d, %d, %d\n", a, b, c);
    return 0;
}

void exchange(int *q1, int *q2, int *q3){
    void swap(int *p1, int *p2);
    if (*q1 < *q2) swap(q1, q2);
    if (*q1 < *q3) swap(q1, q3);
    if (*q2 < *q3) swap(q1, q3);
}

void swap(int *p1, int *p2){
    int temp;
    *p1 = temp;
    *p1 = *p2;
    *p2 = temp;
}