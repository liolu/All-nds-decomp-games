#include "m2c.h"

/*
 * Card command context shared by the backup-card driver.
 * The layout matches the "UnkCardCommon" structure used by func_020bd88c.
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

extern CardCommon data_020f3ae0;
extern OSiThreadInfo data_020f1974;

M2C_UNK func_02000b60(s32);
s32 func_020b6bd0();
M2C_UNK func_020b6be4(s32);
void func_020b51e0(s32 arg0);
extern void func_020bd88c(CardTask task);
extern void func_020bdee4(CardCommon *common);

s32 func_020be0bc(void *src, void *dst, u32 size, CardCallback callback, void *callbackArg, s32 isAsync, u32 command,
                  u32 commandArg, u32 mode) {
    void *common = &data_020f3ae0;
    s32 irqFlags;

    func_02000b60(0x2000B88);
    irqFlags = func_020b6bd0();
    while (((CardCommon *) common)->flags & 4) {
        func_020b51e0((s32) & ((CardCommon *) common)->unk_10c);
    }
    ((CardCommon *) common)->flags |= 4;
    ((CardCommon *) common)->callback    = callback;
    ((CardCommon *) common)->callbackArg = callbackArg;
    func_020b6be4(irqFlags);
    ((CardCommon *) common)->src        = src;
    ((CardCommon *) common)->dst        = dst;
    ((CardCommon *) common)->size       = size;
    ((CardCommon *) common)->command    = command;
    ((CardCommon *) common)->commandArg = commandArg;
    ((CardCommon *) common)->mode       = mode;
    if (isAsync) {
        func_020bd88c(func_020bdee4);
        return 1;
    }
    data_020f3ae0.thread = data_020f1974.entryPoint;
    func_020bdee4(common);
    return ((CardCommon *) common)->cmd->state == 0;
}
