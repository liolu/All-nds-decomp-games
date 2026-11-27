#include "m2c.h"

typedef struct UnkCardCommon {
    u32 unk_000;
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c;
    u32 unk_010[2];
    u32 unk_018;
    u32 unk_01c;
    u32 unk_020;
    u32 unk_024;
    u32 unk_028;
} UnkCardCommon;

typedef struct UnkCardRom {
    void (*unk_000)(struct UnkCardRom *rom);
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c[5];
    u32 unk_020[0x80];
} UnkCardRom;

extern UnkCardCommon data_021e3840;
extern UnkCardRom data_021e3e80;
extern void func_020d4ce8(s32, s32, s32, M2C_UNK);
extern void func_020dd260(u32 hi, u32 lo);

#pragma opt_rotateloops off
#pragma opt_propagation off
void _Z30ReadSingleSegmentFromCartridgev(void) {
    UnkCardCommon *const p = &data_021e3840;
    UnkCardRom *const rom  = &data_021e3e80;

    func_020d4ce8(p->unk_028, 0x04100010, p->unk_020, 0x200);
    func_020dd260(0xB7000000 | (p->unk_01c >> 8), p->unk_01c << 24);
    *(volatile u32 *) 0x040001A4 = rom->unk_004;
}
