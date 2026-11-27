#include "m2c.h"

extern u32 func_020b6bd0(void);
extern void func_020b6be4(u32);
extern void func_01ffddd0(u32 dmaNo, void *src, void *dest, u32 cnt);

void func_020b7040(u32 dmaNo, void *dest, u16 data, u32 size) {
    volatile u32 *cnt;
    u32 flags;

    if (size == 0) {
        return;
    }
    cnt = (volatile u32 *) (0x4000000 + ((dmaNo * 3 + 2) * 4 + 0xb0));
    while (*cnt & 0x80000000) {
    }
    flags                                            = func_020b6bd0();
    *(volatile u32 *) (0x4000000 + dmaNo * 4 + 0xe0) = data;
    func_01ffddd0(dmaNo, (void *) (0x4000000 + dmaNo * 4 + 0xe0), dest, (size >> 1) | 0x81000000);
    func_020b6be4(flags);
    while (*cnt & 0x80000000) {
    }
}
