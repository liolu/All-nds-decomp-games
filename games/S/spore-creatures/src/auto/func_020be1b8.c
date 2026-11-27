/* Reconstructed from USA ARM9 at 0x020d55ac (312 bytes).
 *
 * func_020be1b8(): drives the backup identification of the cartridge
 * through func_020bdc14() and the two func_020beb44() commands,
 * waking the card thread again afterwards and finally invoking the callback
 * that the card module installed in data_020f3ae0.
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

extern UnkCardCommon data_020f3ae0;
extern UnkThreadQueue data_020f1974;

extern void func_02000b60(void *);
extern void func_020b6f24(void);
extern s32 func_020bdaf8(void);
extern s32 func_020b6bd0(void);
extern void func_020b6be4(s32);
extern void func_020b51e0(void *);
extern void func_020b5230(void *);
extern void func_020b5298(void *);
extern s32 func_020bdc14(s32);
extern s32 func_020beb44(void *, s32, s32);

s32 func_020be1b8(s32 arg0) {
    UnkCardCommon *const p = &data_020f3ae0;
    s32 irq1;
    s32 irq2;
    void *cbarg;
    void (*cb)(void *);

    /* "[SD][INTENTDONE:BACKUP]" */
    func_02000b60((void *) 0x2000B88);
    if (arg0 == 0) {
        func_020b6f24();
    }
    func_020bdaf8();
    irq1 = func_020b6bd0();
    while (p->unk_114 & 4) {
        func_020b51e0(&p->unk_10c);
    }
    p->unk_114 |= 4;
    p->unk_038 = 0;
    p->unk_03c = 0;
    func_020b6be4(irq1);
    func_020bdc14(arg0);
    data_020f3ae0.unk_104 = data_020f1974.tail;
    func_020beb44(p, 2, 1);
    M2C_FIELD(M2C_FIELD(p, void **, 0), u32 *, 0xC)  = 0;
    M2C_FIELD(M2C_FIELD(p, void **, 0), u32 *, 0x10) = &p->unk_120;
    M2C_FIELD(M2C_FIELD(p, void **, 0), u32 *, 0x14) = 1;
    func_020beb44(p, 6, 1);
    cb    = p->unk_038;
    cbarg = p->unk_03c;
    irq2  = func_020b6bd0();
    p->unk_114 &= ~0x4C;
    func_020b5230(&p->unk_10c);
    if (p->unk_114 & 0x10) {
        func_020b5298(&p->unk_044);
    }
    func_020b6be4(irq2);
    if (cb != 0) {
        cb(cbarg);
    }
    return M2C_FIELD(M2C_FIELD(p, void **, 0), u32 *, 0) == 0;
}
