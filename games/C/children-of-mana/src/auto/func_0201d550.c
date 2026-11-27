/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201f068(void *);                      /* extern */

void func_0201d550(void *arg0, void *arg1) {
    func_0201f068(arg1);
    M2C_FIELD(arg1, s32 *, 4)    = (s32) M2C_FIELD(arg0, s16 *, 0xBC);
    M2C_FIELD(arg1, s32 *, 0xC)  = 0;
    M2C_FIELD(arg1, s32 *, 8)    = (s32) (M2C_FIELD(arg0, s32 *, 0x214) * 0x64);
    M2C_FIELD(arg1, s32 *, 0x18) = 1;
    M2C_FIELD(arg1, s8 *, 0x9A)  = (s8) ((u32) (M2C_FIELD(arg0, u8 *, 0x27) << 0x1A) >> 0x1F);
}
