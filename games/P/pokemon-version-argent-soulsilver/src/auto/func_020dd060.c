/* Reconstructed from USA ARM9 at 0x020d55ac (312 bytes).
 *
 * func_020dd060(): drives the backup identification of the cartridge
 * through func_020dc9f0() and the two func_020dd950() commands,
 * waking the card thread again afterwards and finally invoking the callback
 * that the card module installed in data_021e3840.
 */
#include "m2c.h"

typedef struct UnkCardCommon {
    void *unk_000;
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c;
    u32 unk_010[2];
    u32 unk_018;
    u32 unk_01c;
    u32 unk_020;
    u32 unk_024;
    u32 unk_028;
    u32 unk_02c[3];
    void (*unk_038)(void *);
    void *unk_03c;
    u32 unk_040;
    u32 unk_044[0x30];
    void *unk_104;
    u32 unk_108;
    u32 unk_10c[2];
    volatile u32 unk_114;
    u32 unk_118[2];
    u8 unk_120[0x100];
} UnkCardCommon;

typedef struct UnkThreadQueue {
    void *head;
    void *tail;
} UnkThreadQueue;

extern UnkCardCommon data_021e3840;
extern UnkThreadQueue data_021e16c0;

extern void func_02000b9c(void *);
extern void func_020d3f48(void);
extern s32 func_020dc8c8(void);
extern s32 _Z20DisableIRQInterruptsv(void);
extern void _Z20SetIRQInterruptStatei(s32);
extern void func_020d1e7c(void *);
extern void func_020d1ecc(void *);
extern void func_020d1f34(void *);
extern s32 func_020dc9f0(s32);
extern s32 func_020dd950(void *, s32, s32);

s32 func_020dd060(s32 arg0) {
    UnkCardCommon *const p = &data_021e3840;
    s32 irq1;
    s32 irq2;
    void *cbarg;
    void (*cb)(void *);

    /* "[SD][INTENTDONE:BACKUP]" */
    func_02000b9c((void *) 0x2000C70);
    if (arg0 == 0) {
        func_020d3f48();
    }
    func_020dc8c8();
    irq1 = _Z20DisableIRQInterruptsv();
    while (p->unk_114 & 4) {
        func_020d1e7c(&p->unk_10c);
    }
    p->unk_114 |= 4;
    p->unk_038 = 0;
    p->unk_03c = 0;
    _Z20SetIRQInterruptStatei(irq1);
    func_020dc9f0(arg0);
    data_021e3840.unk_104 = data_021e16c0.tail;
    func_020dd950(p, 2, 1);
    M2C_FIELD(M2C_FIELD(p, void **, 0), u32 *, 0xC)  = 0;
    M2C_FIELD(M2C_FIELD(p, void **, 0), u32 *, 0x10) = &p->unk_120;
    M2C_FIELD(M2C_FIELD(p, void **, 0), u32 *, 0x14) = 1;
    func_020dd950(p, 6, 1);
    cb    = p->unk_038;
    cbarg = p->unk_03c;
    irq2  = _Z20DisableIRQInterruptsv();
    p->unk_114 &= ~0x4C;
    func_020d1ecc(&p->unk_10c);
    if (p->unk_114 & 0x10) {
        func_020d1f34(&p->unk_044);
    }
    _Z20SetIRQInterruptStatei(irq2);
    if (cb != 0) {
        cb(cbarg);
    }
    return M2C_FIELD(M2C_FIELD(p, void **, 0), u32 *, 0) == 0;
}
