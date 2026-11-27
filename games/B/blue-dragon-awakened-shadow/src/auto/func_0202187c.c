#include "m2c.h"

typedef struct {
    u16 a[19];
} Buf;

extern u8 data_020f8b4c;
extern u8 data_020f8b7c;
extern u8 data_020f8ba4;
extern u8 data_020f8bbc;
extern u8 data_020f8bcc;
extern u8 data_020f8bd4;
extern u8 data_020f8bdc;
extern u8 data_020f8be4;
extern u8 data_020f8bec;
extern u8 data_020f8bf0;
extern u8 data_020f8bf4;
extern u8 data_020f8bf8;
extern u8 data_020f8bfc;
extern u8 data_020f8c00;
extern u8 data_020f8c04;
extern u8 data_020f8c08;
extern u8 data_020f8c0c;
extern u8 data_020f8c10;
extern u8 data_020f8c14;
extern u8 data_020f8c18;
extern u8 data_020f8c1c;

void __str2dec(Buf *, void *, s32);
void __timesdec(Buf *, Buf *, Buf *);

void func_0202187c(Buf *dst, s32 n) {
    Buf tmp2;
    Buf tmp;

    switch (n) {
        case -64:
            __str2dec(dst, &data_020f8b4c, -20);
            return;
        case -53:
            __str2dec(dst, &data_020f8b7c, -16);
            return;
        case -32:
            __str2dec(dst, &data_020f8ba4, -10);
            return;
        case -16:
            __str2dec(dst, &data_020f8bbc, -5);
            return;
        case -8:
            __str2dec(dst, &data_020f8bcc, -3);
            return;
        case -7:
            __str2dec(dst, &data_020f8bd4, -3);
            return;
        case -6:
            __str2dec(dst, &data_020f8bdc, -2);
            return;
        case -5:
            __str2dec(dst, &data_020f8be4, -2);
            return;
        case -4:
            __str2dec(dst, &data_020f8bec, -2);
            return;
        case -3:
            __str2dec(dst, &data_020f8bf0, -1);
            return;
        case -2:
            __str2dec(dst, &data_020f8bf4, -1);
            return;
        case -1:
            __str2dec(dst, &data_020f8bf8, -1);
            return;
        case 0:
            __str2dec(dst, &data_020f8bfc, 0);
            return;
        case 1:
            __str2dec(dst, &data_020f8c00, 0);
            return;
        case 2:
            __str2dec(dst, &data_020f8c04, 0);
            return;
        case 3:
            __str2dec(dst, &data_020f8c08, 0);
            return;
        case 4:
            __str2dec(dst, &data_020f8c0c, 1);
            return;
        case 5:
            __str2dec(dst, &data_020f8c10, 1);
            return;
        case 6:
            __str2dec(dst, &data_020f8c14, 1);
            return;
        case 7:
            __str2dec(dst, &data_020f8c18, 2);
            return;
        case 8:
            __str2dec(dst, &data_020f8c1c, 2);
            return;
        default:
            func_0202187c(&tmp2, ((s32) (n + ((u32) (n & 0x80000000) >> 31)) >> 1));
            __timesdec(dst, &tmp2, &tmp2);
            if (n & 1) {
                tmp = *dst;
                if (n > 0) {
                    __str2dec(&tmp2, &data_020f8c00, 0);
                } else {
                    __str2dec(&tmp2, &data_020f8bf8, -1);
                }
                __timesdec(dst, &tmp, &tmp2);
            }
            return;
    }
}
