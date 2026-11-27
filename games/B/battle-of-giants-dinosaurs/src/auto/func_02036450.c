#include "m2c.h"

typedef struct {
    u16 a[19];
} Buf;

extern u8 data_020b5568;
extern u8 data_020b5598;
extern u8 data_020b55c0;
extern u8 data_020b55d8;
extern u8 data_020b55e8;
extern u8 data_020b55f0;
extern u8 data_020b55f8;
extern u8 data_020b5600;
extern u8 data_020b5608;
extern u8 data_020b560c;
extern u8 data_020b5610;
extern u8 data_020b5614;
extern u8 data_020b5618;
extern u8 data_020b561c;
extern u8 data_020b5620;
extern u8 data_020b5624;
extern u8 data_020b5628;
extern u8 data_020b562c;
extern u8 data_020b5630;
extern u8 data_020b5634;
extern u8 data_020b5638;

void func_020363b4(Buf *, void *, s32);
void func_02036230(Buf *, Buf *, Buf *);

void func_02036450(Buf *dst, s32 n) {
    Buf tmp2;
    Buf tmp;

    switch (n) {
        case -64:
            func_020363b4(dst, &data_020b5568, -20);
            return;
        case -53:
            func_020363b4(dst, &data_020b5598, -16);
            return;
        case -32:
            func_020363b4(dst, &data_020b55c0, -10);
            return;
        case -16:
            func_020363b4(dst, &data_020b55d8, -5);
            return;
        case -8:
            func_020363b4(dst, &data_020b55e8, -3);
            return;
        case -7:
            func_020363b4(dst, &data_020b55f0, -3);
            return;
        case -6:
            func_020363b4(dst, &data_020b55f8, -2);
            return;
        case -5:
            func_020363b4(dst, &data_020b5600, -2);
            return;
        case -4:
            func_020363b4(dst, &data_020b5608, -2);
            return;
        case -3:
            func_020363b4(dst, &data_020b560c, -1);
            return;
        case -2:
            func_020363b4(dst, &data_020b5610, -1);
            return;
        case -1:
            func_020363b4(dst, &data_020b5614, -1);
            return;
        case 0:
            func_020363b4(dst, &data_020b5618, 0);
            return;
        case 1:
            func_020363b4(dst, &data_020b561c, 0);
            return;
        case 2:
            func_020363b4(dst, &data_020b5620, 0);
            return;
        case 3:
            func_020363b4(dst, &data_020b5624, 0);
            return;
        case 4:
            func_020363b4(dst, &data_020b5628, 1);
            return;
        case 5:
            func_020363b4(dst, &data_020b562c, 1);
            return;
        case 6:
            func_020363b4(dst, &data_020b5630, 1);
            return;
        case 7:
            func_020363b4(dst, &data_020b5634, 2);
            return;
        case 8:
            func_020363b4(dst, &data_020b5638, 2);
            return;
        default:
            func_02036450(&tmp2, ((s32) (n + ((u32) (n & 0x80000000) >> 31)) >> 1));
            func_02036230(dst, &tmp2, &tmp2);
            if (n & 1) {
                tmp = *dst;
                if (n > 0) {
                    func_020363b4(&tmp2, &data_020b561c, 0);
                } else {
                    func_020363b4(&tmp2, &data_020b5614, -1);
                }
                func_02036230(dst, &tmp, &tmp2);
            }
            return;
    }
}
