#include "m2c.h"

/*
 * Card command context shared by the backup-card driver.
 * The layout matches the "UnkCardCommon" structure used by func_020dc65c.
 */
typedef volatile u32 vu32;
typedef volatile s32 vs32;

typedef struct CardCommand {
    u32 state;
} CardCommand;

typedef struct CardCommon CardCommon;
typedef void (*CardTask)(CardCommon *common);
typedef void (*CardCallback)(void *arg);

typedef struct CardCommon {
    CardCommand *cmd;         /* 0x00 */
    u32 unk_004;              /* 0x04 */
    vs32 unk_008;             /* 0x08 */
    vs32 unk_00c;             /* 0x0c */
    void *unk_010[2];         /* 0x10 */
    u32 unk_018;              /* 0x18 */
    void *src;                /* 0x1c */
    void *dst;                /* 0x20 */
    u32 size;                 /* 0x24 */
    u32 unk_028;              /* 0x28 */
    u32 command;              /* 0x2c */
    u32 commandArg;           /* 0x30 */
    u32 mode;                 /* 0x34 */
    CardCallback callback;    /* 0x38 */
    void *callbackArg;        /* 0x3c */
    CardTask task;            /* 0x40 */
    u8 unk_044[0x104 - 0x44];
    void *thread;             /* 0x104 */
    u32 unk_108;              /* 0x108 */
    u32 unk_10c[2];           /* 0x10c */
    vu32 flags;               /* 0x114 */
} CardCommon;

typedef struct OSiThreadInfo {
    void *next;
    void *entryPoint;
} OSiThreadInfo;

extern CardCommon data_021e3840;
extern OSiThreadInfo data_021e16c0;

M2C_UNK func_02000b9c(s32);
s32 _Z20DisableIRQInterruptsv();
M2C_UNK _Z20SetIRQInterruptStatei(s32);
void func_020d1e7c(s32 arg0);
extern void func_020dc65c(CardTask task);
extern void func_020dcd74(CardCommon *common);

s32 func_020dcf64(void *src, void *dst, u32 size, CardCallback callback, void *callbackArg, s32 isAsync, u32 command,
                  u32 commandArg, u32 mode) {
    void *common = &data_021e3840;
    s32 irqFlags;

    func_02000b9c(0x2000C70);
    irqFlags = _Z20DisableIRQInterruptsv();
    while (((CardCommon *) common)->flags & 4) {
        func_020d1e7c((s32) & ((CardCommon *) common)->unk_10c);
    }
    ((CardCommon *) common)->flags |= 4;
    ((CardCommon *) common)->callback    = callback;
    ((CardCommon *) common)->callbackArg = callbackArg;
    _Z20SetIRQInterruptStatei(irqFlags);
    ((CardCommon *) common)->src        = src;
    ((CardCommon *) common)->dst        = dst;
    ((CardCommon *) common)->size       = size;
    ((CardCommon *) common)->command    = command;
    ((CardCommon *) common)->commandArg = commandArg;
    ((CardCommon *) common)->mode       = mode;
    if (isAsync) {
        func_020dc65c(func_020dcd74);
        return 1;
    }
    data_021e3840.thread = data_021e16c0.entryPoint;
    func_020dcd74(common);
    return ((CardCommon *) common)->cmd->state == 0;
}
