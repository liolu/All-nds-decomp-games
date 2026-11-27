#include "m2c.h"

extern u32 func_020b6bd0(void);
extern void func_020b6be4(u32 state);

typedef union {
    u32 word;
    struct {
        u32 channel : 5;
        u32 flag : 1;
        u32 rest : 26;
    } bits;
} PxiHeader;

s32 func_020b8ec8(s32 channel, s32 data, s32 flags) {
    PxiHeader h;

    h.bits.channel = channel;
    h.bits.flag    = flags;
    h.word         = (data << 6) | (h.word & 0x3F);

    if (*(volatile u16 *) 0x04000184 & 0x4000) {
        *(volatile u16 *) 0x04000184 |= 0xC000;
        return -1;
    }
    {
        u32 state = func_020b6bd0();
        if (*(volatile u16 *) 0x04000184 & 0x2) {
            func_020b6be4(state);
            return -2;
        }
        *(volatile u32 *) 0x04000188 = h.word;
        func_020b6be4(state);
    }
    return 0;
}
