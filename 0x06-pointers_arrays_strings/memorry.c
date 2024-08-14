#include <stdio.h>

int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;

    printf("Address of n: %p\n", (void *)&n);
    printf("Address of a[0]: %p\n", (void *)&a[0]);
    printf("Address of a[2]: %p\n", (void *)&a[2]);
    printf("Address of p: %p\n", (void *)p);
    printf("Address of (p + 3): %p\n", (void *)(p + 3));
    printf("Address of (p + 5): %p\n", (void *)(p + 5));

    *(p + 5) = 98;

    printf("a[2] = %d\n", a[2]);

    return 0;
}

