#include "m2c.h"
u8 *func_0200da6c(void *, void *);
u8 *func_0200dd2c(void *list, u32 addr);

u8 *func_0200dd2c(void *list, u32 addr) {
    u8 *h = func_0200da6c(list, NULL);
    while (h != NULL) {
        if (*(u32 *) (h + 0x18) <= addr && addr < *(u32 *) (h + 0x1c)) {
            u8 *sub = func_0200dd2c(h + 0xc, addr);
            if (sub == NULL) {
                sub = h;
            }
            return sub;
        }
        h = func_0200da6c(list, h);
    }
    return NULL;
}
