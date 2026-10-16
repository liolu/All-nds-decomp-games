#include "engine.h"
#include "m2c.h"

void func_0201b00c(void);

extern s16 data_02031260;
extern s16 data_020347c4;

void func_0200ac80(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_02031260       = 0;
    data_020347c4       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
    func_0201b00c();
}
