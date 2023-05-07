#include <stdio.h>
#include <math.h>

int main() {
    int x=1, y=2;
    double f;

    printf("Введіть значення зміної x: ");
    scanf("%d", &x);
   printf("Введіть значення зміної  y: ");
    scanf("%d", &y);

    f =  (x + y) / (pow(x, 2) + (x * y + pow(y, 2))) + (sin(x) / (1 + pow(y, 2)))+ (cos(y) / (1 + pow(x, 2)));

    printf("Значення функції f = %f\n", f);

    return 0;
}
