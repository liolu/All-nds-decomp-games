#include "m2c.h"

typedef struct Rec {
    u8 b[0xF0];
} Rec;

extern s32 func_020e5bb0(void *, void *, s32);
extern void func_0209e7cc(u8, void *);
extern u8 data_ov013_02245808[];
extern u8 *data_ov013_0224f5c4;

void func_ov013_0223a434(s8 arg0) {
    u8 *base;
    u8 *rec;
    base                    = data_ov013_0224f5c4;
    rec                     = base + (arg0 << 8);
    *(Rec *) (base + 0x400) = *(Rec *) rec;
    base[0x4F4]             = arg0;
    if (func_020e5bb0(rec + 0xC0, data_ov013_02245808, 4) != 0) {
        data_ov013_0224f5c4[0x4F5] = 0;
    } else {
        data_ov013_0224f5c4[0x4F5] = 1;
    }
    if ((func_020e5bb0(rec + 0xC8, data_ov013_02245808, 4) != 0) || (func_020e5bb0(rec + 0xCC, data_ov013_02245808, 4) != 0)) {
        data_ov013_0224f5c4[0x4F6] = 0;
    } else {
        data_ov013_0224f5c4[0x4F6] = 1;
    }
    func_0209e7cc(rec[0xD0], data_ov013_0224f5c4 + 0x4F0);
}
