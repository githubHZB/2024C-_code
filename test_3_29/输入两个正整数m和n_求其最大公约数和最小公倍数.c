// 引入标准输入输出头文件
#include <stdio.h>

// 主函数入口
int main() 
{
    // 定义五个整型变量：p用于存储两数乘积，r用于存储余数，n和m分别用于存储输入的两个正整数，temp作为临时变量用于交换n与m的值
    int p, r, n, m, temp;

    // 提示用户输入两个正整数n和m，并使用scanf函数进行读取（注意：此处scanf格式应去掉多余的逗号）
    printf("请输入两个正整数n,m:");
    scanf("%d%d", &n, &m);

    // 调整n保存较大的值，即确保n>=m
    if (n < m)
    {
        // 将较小的数赋值给临时变量temp，然后将较大的数赋值给n
        temp = n; 
        n = m; 
        m = temp;
    }

    // 计算两数乘积并存储在变量p中，用于后续计算最小公倍数
    p = n * m; 

    // 使用欧几里得算法计算最大公约数
    while (m != 0) 
    {
        // 更新余数r为n除以m的余数
        r = n % m;

        // 更新n为当前的m
        n = m; 

        // 更新m为当前的余数r
        m = r;
    }

    // 输出两个数的最大公约数
    printf("它们的最大公约数为:%d\n", n); 

    // 计算并输出两个数的最小公倍数，公式为两数乘积除以最大公约数
    printf("它们的最小公倍数为:%d\n", p / n);

    // 程序执行完毕，返回0表示正常退出
    return 0;
}