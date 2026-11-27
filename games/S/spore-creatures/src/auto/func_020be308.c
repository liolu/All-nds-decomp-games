#include "m2c.h"

typedef struct UnkCardCommon {
    u32 unk_000[7];
    volatile u32 unk_01c;
    u8 *unk_020;
    u32 unk_024;
} UnkCardCommon;

typedef struct UnkCardRom {
    void (*unk_000)(void);
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c[5];
    u8 unk_020[0x200];
} UnkCardRom;

extern UnkCardCommon data_020f3ae0;
extern void func_020b7740(const void *src, void *dst, u32 len);

s32 func_020be308(UnkCardRom *rom) {
    UnkCardCommon *const p = &data_020f3ae0;
    u32 page               = p->unk_01c & ~0x1FF;
    if (page == rom->unk_008) {
        u32 offset = p->unk_01c - page;
        u32 len    = 0x200 - offset;
        if (len > p->unk_024) {
            len = p->unk_024;
        }
        func_020b7740(&rom->unk_020[offset], p->unk_020, len);
        p->unk_01c += len;
        p->unk_020 += len;
        p->unk_024 -= len;
    }
    return p->unk_024 != 0;
}
