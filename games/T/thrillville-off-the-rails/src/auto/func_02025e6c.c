/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Sound_FlushCommand from https://github.com/RonyxDumb/mkds src/arm9/020211e4_Sound_FlushCommand.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
struct SNDCommand {
    struct SNDCommand *llNext;
    s32 id;
    u32 arg[4];
};
extern const struct SNDCommand *func_02026110(u32 flags);
extern BOOL func_02025e6c(u32 flags);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_02024624(void);
extern OSIntrMode func_02024638(OSIntrMode state);
extern void func_02024694(u32 cycles);
extern void func_02022e48(register const void *startAddr, register u32 nBytes);
extern s32 func_02024a20(s32 fifotag, u32 data, BOOL err);
extern struct SNDCommand data_020eca80[256];
extern struct SNDCommand *data_020ec7d0[8 + 1];
extern struct SNDCommand *data_020ec7b4;
extern struct SNDCommand *data_020ec7b8;
extern s32 data_020ec7c4;
extern s32 data_020ec7c8;
extern u32 data_020ec7cc;
extern void func_02025bd8(void);
const struct SNDCommand *func_02026110(u32 flags);
BOOL func_02025e6c(u32 flags) {
    OSIntrMode oldirq = func_02024624();

    if (data_020ec7b4 == ((void *) 0)) {
        (void) func_02024638(oldirq);
        return 1;
    }

    if (data_020ec7c8 >= 8) {
        if ((flags & 0x1) == 0) {
            (void) func_02024638(oldirq);
            return 0;
        }

        do {
            (void) func_02026110(0x1);
        } while (data_020ec7c8 >= 8);
    }

    func_02022e48(data_020eca80, sizeof(data_020eca80));

    s32 result = func_02024a20(7, (u32) data_020ec7b4, 0);
    if (result < 0) {
        if ((flags & 0x1) == 0) {
            (void) func_02024638(oldirq);
            return 0;
        }

        result = func_02024a20(7, (u32) data_020ec7b4, 0);
        while (result < 0) {
            (void) func_02024638(oldirq);
            func_02024694(100);
            oldirq = func_02024624();
            result = func_02024a20(7, (u32) data_020ec7b4, 0);
        }
    }

    if ((flags & 0x2) != 0) {
        func_02025bd8();
    }

    data_020ec7d0[data_020ec7c4] = data_020ec7b4;

    if (++data_020ec7c4 > 8) {
        data_020ec7c4 = 0;
    }

    data_020ec7b4 = ((void *) 0);
    data_020ec7b8 = ((void *) 0);
    data_020ec7c8++;
    data_020ec7cc++;

    (void) func_02024638(oldirq);
    return 1;
}
void func_02025bd8(void);
