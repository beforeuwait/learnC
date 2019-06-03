# include<stdio.h>

int main(){
    void print_star();
    void print_msg();
    print_star();
    print_msg();
    print_star();
    return 0;
}

void print_star(){
    printf("**********************\n");
}

void print_msg(){
    printf("How do you do?\n");
}