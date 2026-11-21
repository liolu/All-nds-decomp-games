#include "m2c.h"

typedef struct {
    u8 pad[0xc];
    s32 w0c;
    s32 w10;
    s32 w14;
    s32 w18;
    u8 b1c;
    u8 b1d;
    u8 pad2[4];
    u16 h22;
    u8 pad3[0xc];
} E;
extern E *data_ov000_0221b0c0;

void func_ov000_021f9c40(s32 idx) {
    if (data_ov000_0221b0c0 == 0) {
        return;
    }
    data_ov000_0221b0c0[idx].w0c = 0;
    data_ov000_0221b0c0[idx].w10 = 0;
    data_ov000_0221b0c0[idx].w14 = 0;
    data_ov000_0221b0c0[idx].w18 = 0;
    data_ov000_0221b0c0[idx].b1c = 0;
    if (data_ov000_0221b0c0[idx].b1d != 0) {
        data_ov000_0221b0c0[idx].b1d = 1;
    }
    data_ov000_0221b0c0[idx].h22 = 0;
}
