# include<stdio.h>

/*
 do{} while (); 也就是无论如何都要执行一次
*/

int main(){
    int i = 1;
    do {
        printf("%d\n", i);
        i ++;
        }
        while (i <= 10);
}
