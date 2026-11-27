#include "m2c.h"
u8 *func_020b4d14(void *, void *);
u8 *func_020b4d40(void *list, u32 addr);

u8 *func_020b4d40(void *list, u32 addr) {
    u8 *h = func_020b4d14(list, NULL);
    while (h != NULL) {
        if (*(u32 *) (h + 0x18) <= addr && addr < *(u32 *) (h + 0x1c)) {
            u8 *sub = func_020b4d40(h + 0xc, addr);
            if (sub == NULL) {
                sub = h;
            }
            return sub;
        }
        h = func_020b4d14(list, h);
    }
    return NULL;
}
