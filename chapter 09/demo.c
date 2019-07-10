# include<stdio.h>

int main(){
    struct Student{
        long int num;   // 学号
        char name[20];  //姓名
        char sex;       //性别
        char addr[20];  // 地址
    } xiaoming={201113060116, "xiaoming", 'M', "chengdu"},xiaodong={201113060117, "xiaodong", 'F', "chengdu"};
    printf("No: %ld\t,name: %s\t,sex: %c\t,addr: %s\n", xiaodong.num, xiaodong.name, xiaodong.sex, xiaodong.addr);

    return 0;
}