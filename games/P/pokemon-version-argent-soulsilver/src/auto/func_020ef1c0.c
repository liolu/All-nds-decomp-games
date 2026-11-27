#include "m2c.h"

typedef struct {
    u16 a[19];
} Buf;

extern u8 data_02111428;
extern u8 data_02111458;
extern u8 data_02111480;
extern u8 data_02111498;
extern u8 data_021114a8;
extern u8 data_021114b0;
extern u8 data_021114b8;
extern u8 data_021114c0;
extern u8 data_021114c8;
extern u8 data_021114cc;
extern u8 data_021114d0;
extern u8 data_021114d4;
extern u8 data_021114d8;
extern u8 data_021114dc;
extern u8 data_021114e0;
extern u8 data_021114e4;
extern u8 data_021114e8;
extern u8 data_021114ec;
extern u8 data_021114f0;
extern u8 data_021114f4;
extern u8 data_021114f8;

void func_020ef124(Buf *, void *, s32);
void func_020eefa0(Buf *, Buf *, Buf *);

void func_020ef1c0(Buf *dst, s32 n) {
    Buf tmp2;
    Buf tmp;

    switch (n) {
        case -64:
            func_020ef124(dst, &data_02111428, -20);
            return;
        case -53:
            func_020ef124(dst, &data_02111458, -16);
            return;
        case -32:
            func_020ef124(dst, &data_02111480, -10);
            return;
        case -16:
            func_020ef124(dst, &data_02111498, -5);
            return;
        case -8:
            func_020ef124(dst, &data_021114a8, -3);
            return;
        case -7:
            func_020ef124(dst, &data_021114b0, -3);
            return;
        case -6:
            func_020ef124(dst, &data_021114b8, -2);
            return;
        case -5:
            func_020ef124(dst, &data_021114c0, -2);
            return;
        case -4:
            func_020ef124(dst, &data_021114c8, -2);
            return;
        case -3:
            func_020ef124(dst, &data_021114cc, -1);
            return;
        case -2:
            func_020ef124(dst, &data_021114d0, -1);
            return;
        case -1:
            func_020ef124(dst, &data_021114d4, -1);
            return;
        case 0:
            func_020ef124(dst, &data_021114d8, 0);
            return;
        case 1:
            func_020ef124(dst, &data_021114dc, 0);
            return;
        case 2:
            func_020ef124(dst, &data_021114e0, 0);
            return;
        case 3:
            func_020ef124(dst, &data_021114e4, 0);
            return;
        case 4:
            func_020ef124(dst, &data_021114e8, 1);
            return;
        case 5:
            func_020ef124(dst, &data_021114ec, 1);
            return;
        case 6:
            func_020ef124(dst, &data_021114f0, 1);
            return;
        case 7:
            func_020ef124(dst, &data_021114f4, 2);
            return;
        case 8:
            func_020ef124(dst, &data_021114f8, 2);
            return;
        default:
            func_020ef1c0(&tmp2, ((s32) (n + ((u32) (n & 0x80000000) >> 31)) >> 1));
            func_020eefa0(dst, &tmp2, &tmp2);
            if (n & 1) {
                tmp = *dst;
                if (n > 0) {
                    func_020ef124(&tmp2, &data_021114dc, 0);
                } else {
                    func_020ef124(&tmp2, &data_021114d4, -1);
                }
                func_020eefa0(dst, &tmp, &tmp2);
            }
            return;
    }
}
