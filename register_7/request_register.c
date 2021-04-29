#include <stdio.h>

int main(void)
{
    int num;
    register size_t i;

    num = 0;

    for (i = 0; i < 1000; ++i) {
        num += i;
    }

    printf("num %d\n", num);
}
