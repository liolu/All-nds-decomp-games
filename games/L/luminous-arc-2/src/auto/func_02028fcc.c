#include "m2c.h"
u8 *func_02028fa0(void *, void *);
u8 *func_02028fcc(void *list, u32 addr);

u8 *func_02028fcc(void *list, u32 addr) {
    u8 *h = func_02028fa0(list, NULL);
    while (h != NULL) {
        if (*(u32 *) (h + 0x18) <= addr && addr < *(u32 *) (h + 0x1c)) {
            u8 *sub = func_02028fcc(h + 0xc, addr);
            if (sub == NULL) {
                sub = h;
            }
            return sub;
        }
        h = func_02028fa0(list, h);
    }
    return NULL;
}
