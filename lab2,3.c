#include <stdio.h>
#include <math.h>

int main() {
    int x=1, y=2;
    double f;

    printf("������ �������� ���� x: ");
    scanf("%d", &x);
   printf("������ �������� ����  y: ");
    scanf("%d", &y);

    f =  (x + y) / (pow(x, 2) + (x * y + pow(y, 2))) + (sin(x) / (1 + pow(y, 2)))+ (cos(y) / (1 + pow(x, 2)));

    printf("�������� ������� f = %f\n", f);

    return 0;
}
