#include <stdio.h>

void print_to_98(int n)
{

        if(n > 98)
        {
                while(n >= 98)
                {
                        printf("%d", n);
                        n--;
                        if (n >= 98)
                        {
                                printf(",");
                                printf(" ");

                        }
                }
        }
        else
        {
                while(n <= 98)
                {
                        printf("%d", n);
                        n++;
                        if (n <= 98)
                        {
                                printf(",");
                                printf(" ");

                        }
                }
        }
        printf("\n");
        return;
}
int main()
{
        print_to_98(100);
        print_to_98(1);
}
