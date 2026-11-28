#include "m2c.h"
typedef struct {
    s32 a;
    s16 b;
    s16 c;
} E;
typedef struct {
    u8 hdr[0x10];
    E e[0x80];
    u32 f;
} G;
extern G data_ov111_020ec674;
void func_ov111_020e52d8(void) {
    s32 i;
    for (i = 0; i < 0x80; i++) {
        data_ov111_020ec674.e[i].a = 0x200;
        data_ov111_020ec674.e[i].b = 0;
    }
    data_ov111_020ec674.f &= ~0xFF;
}
