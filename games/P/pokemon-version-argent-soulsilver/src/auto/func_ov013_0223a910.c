/* near start: 14 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct G {
    u8 p0[0xe7];
    u8 b0[0x8];
    u8 flags;
    u8 p1[0xff];
    u8 flags2;
} G;
extern G *data_ov013_0224f5c4;
void func_020d4994(void *, u8, u32);
u16 func_020e3a04(void *, void *, u32);
s32 func_ov013_022412ac(s32, s32);
void func_0209e654(void *, void *, s32);
void func_ov013_022412d0(s32 *);

void func_ov013_0223a910(s32 slot) {
    s32 vals[4];
    s32 h;
    u8 b;
    u32 bit;
    s32 on = 0;
    s32 i;
    b   = *((u8 *) data_ov013_0224f5c4 + slot * 0x100 + 0xe7);
    bit = 1 << slot;
    func_020d4994(vals, on, 0x10);
    vals[slot] = 1;
    if (slot <= 2) {
        if (data_ov013_0224f5c4->flags & bit) {
            on = 1;
        }
        if (b == 0xff && on) {
            data_ov013_0224f5c4->flags &= ~bit;
            data_ov013_0224f5c4->flags2 &= ~bit;
            vals[1] = 1;
            vals[0] = 1;
        } else if (b != 0xff && !on) {
            data_ov013_0224f5c4->flags |= bit;
            data_ov013_0224f5c4->flags2 |= bit;
            vals[1] = 1;
            vals[0] = 1;
        }
    }
    for (i = 0; i < 4; i++) {
        if (vals[i] != 0) {
            u16 crc = func_020e3a04((u8 *) data_ov013_0224f5c4 + 0x4f8, (u8 *) data_ov013_0224f5c4 + i * 0x100, 0xfe);
            ((u16 *) ((u8 *) data_ov013_0224f5c4 + 0xfe))[i * 0x80] = crc;
        }
    }
    h = func_ov013_022412ac(0x100, 0x20);
    func_0209e654(data_ov013_0224f5c4, vals, h);
    func_ov013_022412d0(&h);
}
