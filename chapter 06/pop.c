# include<stdio.h>

/*写一个冒泡算法*/

int main(){
    int a[10];  //定一个10个长度的数组
    int i,j,t;
    printf("input 10 numbers:\t\n");
    for (i=0; i<10;i++)
        scanf("%d", &a[i]);
    for (j=0; j<9; j++){
        for (i=0; i<9-j; i++){
            if (a[i] > a[i + 1]){
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
    printf("the sort number is:\t");
    for(i=0; i<10;i++)
        printf(" %d ", a[i]);
    printf("\n");
    return 0;
}