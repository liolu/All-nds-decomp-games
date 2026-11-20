#include "m2c.h"

extern u8 data_020df20c[];
extern void func_0208e3f4(void);
u8 *func_0208cbe8(s32 i);
void *func_0208cf30(s32 heap, s32 size, void *cb, void *ud, s32 x);
void func_0208e188(u8 *p);

s32 func_0208dedc(s32 heap) {
    s32 i;
    s32 sz;
    u8 *p = data_020df20c;
    for (i = 0; i < 4; i++, p += 0x174) {
        u8 *info = func_0208cbe8(i);
        if (info != 0) {
            s32 k;
            u8 n;
            p[0x124] = *info;
            k        = 0;
            if ((s32) *info > 0) {
                do {
                    p[0x126 + k] = info[k + 1];
                    k++;
                } while (k < *info);
            }
            if (heap != 0) {
                void *r;
                n  = p[0x124];
                sz = n << 11;
                r  = func_0208cf30(heap, sz, func_0208e3f4, p, 0);
                if (r == 0) {
                    return 0;
                }
                func_0208e188(p);
                *(void **) (p + 0x12C) = r;
                *(s32 *) (p + 0x130)   = sz;
            }
        }
    }
    return 1;
}
