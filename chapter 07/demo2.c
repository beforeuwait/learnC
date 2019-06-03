# include<stdio.h>

int age(int n){
    int c;
    if (n == 1)
        c = 10;
    else
        c = age(n - 1) + 2;
    return c;
}

int main(){
    int age(int n);
    int result,x = 3;
    result = age(x);
    printf("%d\n",result);
}
