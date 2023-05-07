#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, a, b, c;
    printf("Ведіть ціле число : ");
    scanf("%d", &x);
    printf("Ведіть ціле число : ");
    scanf("%d", &y);
    a=x+y;
    printf("Сума чисел=%d\n",a );
    b=y/x;
    printf("Результат ділення 2-го числа на 1-е = %d\n",b );
    c=x*y;
    printf("Добуток чисел = %d\n",c );
   return 0;
}
