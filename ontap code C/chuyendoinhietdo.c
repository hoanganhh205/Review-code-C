#include <stdio.h>

double chuyen_c_sang_f(double c) {
    return (c * 9.0 / 5.0) + 32.0;
}
double chuyen_f_sang_c(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    int choice;
    double nd, kq;
    
    printf("1. Chuyen Celsius sang Fahrenheit\n");
    printf("2. Chuyen Fahrenheit sang Celsius\n");
    printf("Chon 1 hoac 2: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Nhap nhiet do C: ");
        scanf("%lf", &nd);
        kq = chuyen_c_sang_f(nd);
        printf("%.2lf do C bang %.2lf do F", nd, kq);
    } else if (choice == 2) {
        printf("Nhap nhiet do F: ");
        scanf("%lf", &nd);
        kq = chuyen_f_sang_c(nd);
        printf("%.2lf do F bang %.2lf do C", nd, kq);
    } else {
        printf("INVALID");
    }

    return 0;
}

