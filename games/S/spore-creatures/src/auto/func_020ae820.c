#include "m2c.h"
u8 *func_020ae7f4(void *, void *);
u8 *func_020ae820(void *list, u32 addr);

u8 *func_020ae820(void *list, u32 addr) {
    u8 *h = func_020ae7f4(list, NULL);
    while (h != NULL) {
        if (*(u32 *) (h + 0x18) <= addr && addr < *(u32 *) (h + 0x1c)) {
            u8 *sub = func_020ae820(h + 0xc, addr);
            if (sub == NULL) {
                sub = h;
            }
            return sub;
        }
        h = func_020ae7f4(list, h);
    }
    return NULL;
}
