#include <stdio.h>



int main() {

    // ข้อมูลผู้ใช้ 3 คน (ใส่ไว้ล่วงหน้า)

    char name1[] = "whan";

    int age1 = 100;

    int height1 = 171;

    float weight1 = 51.0;

    float grade1 = 3.00;



    char name2[] = "title";

    int age2 = 100;

    int height2 = 170;

    float weight2 = 55.0;

    float grade2 = 3.00;



    char name3[] = "name";

    int age3 = 20;

    int height3 = 170;

    float weight3 = 51.0;

    float grade3 = 3.00;



    // แสดงผลข้อมูลเป็นตาราง

    printf("\n-------------------------------------------------------------\n");

    printf("| Name    | Age | Height(cm) | Weight(kg) |  Grade Point  |\n");

    printf("-------------------------------------------------------------\n");

    printf("| %-7s | %3d |     %3d     |    %5.1f   |     %.2f     |\n", name1, age1, height1, weight1, grade1);

    printf("| %-7s | %3d |     %3d     |    %5.1f   |     %.2f     |\n", name2, age2, height2, weight2, grade2);

    printf("| %-7s | %3d |     %3d     |    %5.1f   |     %.2f     |\n", name3, age3, height3, weight3, grade3);

    printf("-------------------------------------------------------------\n");



    return 0;
}
