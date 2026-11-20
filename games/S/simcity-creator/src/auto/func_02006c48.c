#include "m2c.h"
extern u32 func_020066e0(void);
extern void func_020066f4(u32);

void func_02006c48(s32 ch) {
    u32 flags;
    volatile u32 *cnt;
    u32 *sad;
    flags = func_020066e0();
    cnt   = (volatile u32 *) (0x4000000 + ((ch * 3 + 2) * 4 + 0xb0));
    while (*cnt & 0x80000000) {
    }
    if (ch == 0) {
        sad        = (u32 *) (0x4000000 + ch * 12 + 0xb0);
        *sad       = 0;
        *(sad + 1) = 0;
        *(sad + 2) = 0x81400001;
    }
    func_020066f4(flags);
}
