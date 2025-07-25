#include <stdio.h>

int main() {
    float a = 0.617;
    int b1 = 2, b2 = 5;
    float c = 1.900000;
    int d = 9;
    float e = 124.555;
    float f = 0.001;

    printf("a = %6.3f %%\n", a);      // แสดง 0.617 ชิดขวา 6 ตำแหน่ง
    printf("b = %6d%4d %%\n", b1, b2); // b = ช่องว่างก่อน 2 และ 5
    printf("c = %1d%2d . %1d%1d%1d%1d %%\n", 1, 9, 0, 0, 0, 0);
    printf("d = %17d %%\n", d);       // d = อยู่ช่องที่ 9 จากภาพ
    printf("e = %1d%1d%1d . %1d%1d%1d %%\n", 1, 2, 4, 5, 5, 5);
    printf("f = %4.3f %%\n", f);      // แสดง 0.001

    return 0;
}
