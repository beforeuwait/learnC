# include<stdio.h>
# include<math.h>

/*
 开平方根后，能被整除，那说明就不是啦
*/
int main()
{
    int n, k, i, m=0;
    for (n = 101; n <= 200; n+=2)
    {
        k = sqrt(n);
        for (i = 2; i <= k; i++)
        {
            if (n%i == 0)break;
        };
        if (i >= k+1)
        {
            printf("%d ", n);
            m += 1;
        };
        if (m%10==0)printf("\n"); //一行输出10个
    }
    printf("\n");
    return 0;
}