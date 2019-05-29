# include<stdio.h>
/*计算 1-100的值*/
int main1() {
    int sum = 0;
    for(int i=1;i<=100;){
        sum += i++;
    }
    printf("sum is %d\n", sum);
    return 0;
}

int main() {
    int sum = 0;
    for(int i=0, j=100;i<=j;){
        sum += i++ + j--;
    }
    printf("sum is %d\n", sum);
    return 0;
}