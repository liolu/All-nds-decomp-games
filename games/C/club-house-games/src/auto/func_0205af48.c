/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u8 data_02262f2c[];
extern u8 data_02262f20[];
extern u8 data_02262f38[];
extern u8 data_02263378[];
void func_02057f74(void *, s16);
void func_02057ee8(void *, void *);

void func_0205af48(void) {
    s32 i;
    u8 *p;
    func_02057f74(data_02262f2c, 0x14);
    func_02057f74(data_02262f20, 0x14);
    p = data_02262f38;
    for (i = 0; i < 0x10; i++) {
        p[0x2c] = 0;
        p[0x3c] = i;
        func_02057ee8(data_02262f20, p);
        p += 0x44;
    }
    p = data_02263378;
    for (i = 0; i < 0x20; i++) {
        func_02057f74(p, 0xc);
        func_02057f74(p + 0xc, 0);
        p[0x20]             = 0x7f;
        *(s32 *) (p + 0x18) = 1;
        *(s32 *) (p + 0x1c) = 0;
        p += 0x24;
    }
}
