/* Reconstructed from USA ARM9 at 0x020d5c58 (152 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

#pragma opt_propagation off

typedef unsigned int vu32;

typedef struct UnkCardCmd {
    s32 unk_00;
} UnkCardCmd;

typedef struct UnkCardThread {
    u8 unk_000[0xc8];
} UnkCardThread;

typedef struct UnkCardThreadQueue {
    void *head;
    void *tail;
} UnkCardThreadQueue;

typedef struct UnkCardRom {
    void (*unk_000)(struct UnkCardRom *rom);
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c[5];
    u32 unk_020[0x80];
} UnkCardRom;

typedef struct UnkCardCommon {
    UnkCardCmd *unk_000;
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c;
    u32 unk_010[2];
    u32 unk_018;
    u32 unk_01c;
    u32 unk_020;
    u32 unk_024;
    u32 unk_028;
    u32 unk_02c;
    u32 unk_030;
    u32 unk_034;
    void (*unk_038)(void *);
    void *unk_03c;
    u32 unk_040;
    UnkCardThread unk_044;
    UnkCardThreadQueue unk_10c;
    vu32 unk_114;
} UnkCardCommon;

extern UnkCardCommon data_020f3ae0;
extern UnkCardRom data_020f4120;
extern s32 func_020be308(void *);
extern s32 func_020be794(void);
extern void func_020bedc4(u32);
extern u32 func_020b6bd0(void);
extern void func_020b6be4(u32);
extern void func_020b5230(UnkCardThreadQueue *);
extern void func_020b5298(void *);

void func_020be8b4(void) {
    UnkCardRom *rom = &data_020f4120;
    UnkCardCommon *common;
    void (*callback)(void *);
    void *callbackArg;
    u32 prevIRQState;

    if (func_020be308(rom) != 0) {
        rom->unk_000(rom);
    }
    common = &data_020f3ae0;
    func_020bedc4(func_020be794());
    common->unk_000->unk_00 = 0;
    callback                = common->unk_038;
    callbackArg             = common->unk_03c;
    prevIRQState            = func_020b6bd0();
    common->unk_114 &= ~0x4c;
    func_020b5230(&common->unk_10c);
    if (common->unk_114 & 0x10) {
        func_020b5298(&common->unk_044);
    }
    func_020b6be4(prevIRQState);
    if (callback != 0) {
        callback(callbackArg);
    }
}
