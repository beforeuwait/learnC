#include<stdio.h>

/*
将指定的华氏温度转换为摄氏温度
 */

int main(){
    float hs, ss;
    scanf("%f", &hs);
    ss = (5.0/9) * (hs - 32);
    printf("华氏温度:\t%f, 摄氏温度:\t%f\n", hs, ss);
    return 0;
}
 /*
    常量: 
        整形常量: 100, 1234, -100
        实型常量: 
            十进制小数
            指数形式
        字符常量: 
            普通常量: 'a', 'A'
            转义字符: 
                \a 警告
                \b 退格
                \f 换页
                \n 换行
                \r 回车
                \v 垂直对其
        符号常量
            # define 指令
    
    变量: 先定义，再使用

    数据类型:
        基本类型:
            整型类型:
                基本类型 int
                短整型 short int
                长整型 long int
                *双长整型 long long int
                字符型 char
                布尔型 bool
            浮点类型:
                单精度浮点类型 float
                双精度浮点类型 double
                复数浮点型 float_complex, double_comple, long long_comple
        枚举类型 enum
        空类型 void
        派生类型
            指针类型 *
            数组类型 []
            结构体类型 struct
            共用体类型 union
            函数类型 
 */ 