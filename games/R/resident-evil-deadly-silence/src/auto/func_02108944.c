/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef s32 (*drv_fn)(void *, s32, s32, s32);

s32 func_021054ac(void);
void func_021054c0(s32 s);
void func_02103b00(void *p);

void func_02108944(u8 *obj, s32 arg1, s32 arg2) {
    u8 *dev;
    s32 res;
    s32 irq;

    dev                   = *(u8 **) obj;
    *(u32 *) (dev + 0x10) = *(u32 *) (dev + 0x10) | 0x200;
    res                   = ((drv_fn) * (u32 *) (dev + 0x44))(dev, arg1, *(s32 *) (obj + 4), arg2);
    switch (res) {
        case 0:
        case 1:
            *(u32 *) (dev + 0x10) = *(u32 *) (dev + 0x10) & ~0x200;
            break;
        case 6:
            irq = func_021054ac();
            while (*(u32 *) (dev + 0x10) & 0x200) {
                func_02103b00(dev + 0xc);
            }
            func_021054c0(irq);
            break;
    }
    *(s32 *) (obj + 4) = *(s32 *) (obj + 4) + arg2;
}
