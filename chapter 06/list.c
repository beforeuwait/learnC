# include<stdio.h>

int main(){
    int a[10];
    for(int i=0;i<10;i++)
        a[i] = i;
        
    printf("a[9]=%d\n", a[9]);
    return 0;
}