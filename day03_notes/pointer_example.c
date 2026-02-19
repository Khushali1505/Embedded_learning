#include <stdio.h>

int main(void)
{
    int value = 10;
    int *ptr = &value;

    printf("Value: %d\n", value);
    printf("Address of value: %p\n", &value);
    printf("Value using pointer: %d\n", *ptr);

    return 0;
}
