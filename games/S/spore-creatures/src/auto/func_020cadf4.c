typedef struct decimal {
    char sgn;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[32];
        unsigned char unused;
    } sig;
} decimal;

extern void func_020cad58(decimal *d, const char *s, short exp);
extern void func_020cabd4(decimal *result, const decimal *x, const decimal *y);

extern const char data_020e0a84[];
extern const char data_020e0ab4[];
extern const char data_020e0adc[];
extern const char data_020e0af4[];
extern const char data_020e0b04[];
extern const char data_020e0b0c[];
extern const char data_020e0b14[];
extern const char data_020e0b1c[];
extern const char data_020e0b24[];
extern const char data_020e0b28[];
extern const char data_020e0b2c[];
extern const char data_020e0b30[];
extern const char data_020e0b34[];
extern const char data_020e0b38[];
extern const char data_020e0b3c[];
extern const char data_020e0b40[];
extern const char data_020e0b44[];
extern const char data_020e0b48[];
extern const char data_020e0b4c[];
extern const char data_020e0b50[];
extern const char data_020e0b54[];

void func_020cadf4(decimal *result, long exp) {
    switch (exp) {
        case -64:
            func_020cad58(result, data_020e0a84, -20);
            return;
        case -53:
            func_020cad58(result, data_020e0ab4, -16);
            return;
        case -32:
            func_020cad58(result, data_020e0adc, -10);
            return;
        case -16:
            func_020cad58(result, data_020e0af4, -5);
            return;
        case -8:
            func_020cad58(result, data_020e0b04, -3);
            return;
        case -7:
            func_020cad58(result, data_020e0b0c, -3);
            return;
        case -6:
            func_020cad58(result, data_020e0b14, -2);
            return;
        case -5:
            func_020cad58(result, data_020e0b1c, -2);
            return;
        case -4:
            func_020cad58(result, data_020e0b24, -2);
            return;
        case -3:
            func_020cad58(result, data_020e0b28, -1);
            return;
        case -2:
            func_020cad58(result, data_020e0b2c, -1);
            return;
        case -1:
            func_020cad58(result, data_020e0b30, -1);
            return;
        case 0:
            func_020cad58(result, data_020e0b34, 0);
            return;
        case 1:
            func_020cad58(result, data_020e0b38, 0);
            return;
        case 2:
            func_020cad58(result, data_020e0b3c, 0);
            return;
        case 3:
            func_020cad58(result, data_020e0b40, 0);
            return;
        case 4:
            func_020cad58(result, data_020e0b44, 1);
            return;
        case 5:
            func_020cad58(result, data_020e0b48, 1);
            return;
        case 6:
            func_020cad58(result, data_020e0b4c, 1);
            return;
        case 7:
            func_020cad58(result, data_020e0b50, 2);
            return;
        case 8:
            func_020cad58(result, data_020e0b54, 2);
            return;
    }

    {
        decimal x2, temp;

        func_020cadf4(&x2, ((long) ((0x80000000UL & exp) >> 31) + exp) >> 1);
        func_020cabd4(result, &x2, &x2);

        if (exp & 1) {
            temp = *result;
            if (exp > 0) {
                func_020cad58(&x2, data_020e0b38, 0);
            } else {
                func_020cad58(&x2, data_020e0b30, -1);
            }
            func_020cabd4(result, &temp, &x2);
        }
    }
}
