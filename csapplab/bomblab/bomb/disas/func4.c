

#include "stdio.h"

/**
 * @brief
 *
 * @param num1  输入的第一个数          rdi
 * @param a     0x0                    rsi
 * @param b     0xe                    rdx
 * @return int
 */
int func4(int num1, int a, int b)
{
    // int z = 0xe;
    // int y = 0;
    // int x = 99;

    int result = b;
    result -= a;

    // int ecx = result;
    // ecx >>= 0x1f;

    // result += ecx;

    result >>= 1;

    // (z- y) >> 1

    int ecx = 1 * a + result;

    if (ecx <= num1)
    {
        result = 0;
        if (ecx >= num1)
        {
            return 0;
        }
        else
        {
            a = ecx + 1;
            result = func4(num1, a, b);
            return 2 * result + 1;
        }
    }
    else
    {
        b = ecx - 1;
        result = func4(num1, a, b);
        result = 2 * result;
        return result;
    }
}


int main() {
    printf("%d\n", func4(0,0x0, 0xe));
}