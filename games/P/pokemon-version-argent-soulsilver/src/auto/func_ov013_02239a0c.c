#include "m2c.h"

typedef struct G {
    u8 pad0[0x10];
    u16 f10;
    u16 f12;
    u8 pad14[5];
    u8 b19;
    u8 b1A;
    u8 b1B;
} G;

extern G *data_ov013_0224f5bc;
extern u8 data_ov013_022457b4[];

void func_ov013_02239a0c(u32 arg0, u16 *out) {
    out[0] = data_ov013_0224f5bc->f10;
    out[2] = out[0] + 12;
    switch (arg0) {
        case 0:
            break;
        case 1:
            out[1] = data_ov013_0224f5bc->f12 + data_ov013_0224f5bc->b1A;
            out[3] = out[1] + data_ov013_022457b4[data_ov013_0224f5bc->b1B];
            break;
        case 2:
            out[1] = data_ov013_0224f5bc->f12 - 13;
            out[3] = data_ov013_0224f5bc->f12;
            break;
        case 3:
            out[1] = data_ov013_0224f5bc->f12 + data_ov013_0224f5bc->b19;
            out[3] = out[1] + 13;
            break;
        case 4:
            out[1] = data_ov013_0224f5bc->f12;
            out[3] = out[1] + data_ov013_0224f5bc->b19;
            break;
    }
}
