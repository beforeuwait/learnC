# include<stdio.h>

struct Date{
    int year;
    int month;
    int day;
};

struct Student
{
    int age;
    char height;
    char sex;
    char addr[30];
    struct Date birthday;
} xiaoming, xiaodong;
