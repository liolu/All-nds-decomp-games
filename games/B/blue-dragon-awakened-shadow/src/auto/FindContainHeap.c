#include "m2c.h"
u8 *NNS_FndGetNextListObject(void *, void *);
u8 *FindContainHeap(void *list, u32 addr);

u8 *FindContainHeap(void *list, u32 addr) {
    u8 *h = NNS_FndGetNextListObject(list, NULL);
    while (h != NULL) {
        if (*(u32 *) (h + 0x18) <= addr && addr < *(u32 *) (h + 0x1c)) {
            u8 *sub = FindContainHeap(h + 0xc, addr);
            if (sub == NULL) {
                sub = h;
            }
            return sub;
        }
        h = NNS_FndGetNextListObject(list, h);
    }
    return NULL;
}
