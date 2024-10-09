# include <stdio.h>

void main() {
    char char_x[4];
    int int_x[4];
    float float_x[4];
    double double_x[4];

    printf("%p %p %p\n", char_x + 1, char_x + 2, char_x + 3);
    printf("%p %p %p\n", int_x + 1, int_x + 2, int_x + 3);
    printf("%p %p %p\n", float_x + 1, float_x + 2, float_x + 3);
    printf("%p %p %p\n", double_x + 1, double_x + 2, double_x + 3);
}

// char ocupa 1 byte
// int ocupa 2 bytes
// float ocupa 4 bytes
// double ocupa 8 bytes

/* Endereço de x: 4092
    char x[4];
    x + 1 = 4093; x + 2 = 4094; x + 3 = 4095;

    int x[4];
    x + 2 = 4094; x + 4 = 4096; x + 6 = 4098;

    float x[4];
    x + 4 = 4096; x + 8 = 4100; x + 12 = 4104;

    double x[4];
    x + 8 = 4100; x + 16 = 4108; x + 24 = 4116;
*/