/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0211a5a0;
void func_0205af64(void *);

void func_02051c6c(s32 a, s32 b, s32 c) {
    u8 *r2;

    if (a != 0xB) {
        return;
    }
    if (c == 0) {
        return;
    }
    r2 = (u8 *) &data_0211a5a0;
    *(u32 *) (r2 + 0xE0) &= ~0x20;
    func_0205af64(*(void **) (r2 + 0xD4));
}
