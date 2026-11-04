/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0206b3c0[];
extern void func_020447f4(void);
u8 *func_020427e0(s32 i);
void *func_02042e08(s32 heap, s32 size, void *cb, void *ud, s32 x);
void func_02044a20(u8 *p);

s32 func_02044b98(s32 heap) {
    s32 i;
    s32 sz;
    u8 *p = data_0206b3c0;
    for (i = 0; i < 4; i++, p += 0x15C) {
        u8 *info = func_020427e0(i);
        if (info != 0) {
            s32 k;
            u8 n;
            p[0x120] = *info;
            k        = 0;
            if ((s32) *info > 0) {
                do {
                    p[0x122 + k] = info[k + 1];
                    k++;
                } while (k < *info);
            }
            if (heap != 0) {
                void *r;
                n  = p[0x120];
                sz = n << 11;
                r  = func_02042e08(heap, sz, func_020447f4, p, 0);
                if (r == 0) {
                    return 0;
                }
                func_02044a20(p);
                *(void **) (p + 0x128) = r;
                *(s32 *) (p + 0x12C)   = sz;
            }
        }
    }
    return 1;
}
