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
extern const struct SNDCommand *func_02068d00(u32 flags);
extern BOOL func_02068a5c(u32 flags);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_02067278(void);
extern OSIntrMode func_0206728c(OSIntrMode state);
extern void func_020672dc(u32 cycles);
extern void func_0206633c(register const void *startAddr, register u32 nBytes);
extern s32 func_02069704(s32 fifotag, u32 data, BOOL err);
extern struct SNDCommand data_020e6980[256];
extern struct SNDCommand *data_020e66c4[8 + 1];
extern struct SNDCommand *data_020e66a8;
extern struct SNDCommand *data_020e66ac;
extern s32 data_020e66b8;
extern s32 data_020e66bc;
extern u32 data_020e66c0;
extern void func_020687c8(void);
const struct SNDCommand *func_02068d00(u32 flags);
BOOL func_02068a5c(u32 flags) {
    OSIntrMode oldirq = func_02067278();

    if (data_020e66a8 == ((void *) 0)) {
        (void) func_0206728c(oldirq);
        return 1;
    }

    if (data_020e66bc >= 8) {
        if ((flags & 0x1) == 0) {
            (void) func_0206728c(oldirq);
            return 0;
        }

        do {
            (void) func_02068d00(0x1);
        } while (data_020e66bc >= 8);
    }

    func_0206633c(data_020e6980, sizeof(data_020e6980));

    s32 result = func_02069704(7, (u32) data_020e66a8, 0);
    if (result < 0) {
        if ((flags & 0x1) == 0) {
            (void) func_0206728c(oldirq);
            return 0;
        }

        result = func_02069704(7, (u32) data_020e66a8, 0);
        while (result < 0) {
            (void) func_0206728c(oldirq);
            func_020672dc(100);
            oldirq = func_02067278();
            result = func_02069704(7, (u32) data_020e66a8, 0);
        }
    }

    if ((flags & 0x2) != 0) {
        func_020687c8();
    }

    data_020e66c4[data_020e66b8] = data_020e66a8;

    if (++data_020e66b8 > 8) {
        data_020e66b8 = 0;
    }

    data_020e66a8 = ((void *) 0);
    data_020e66ac = ((void *) 0);
    data_020e66bc++;
    data_020e66c0++;

    (void) func_0206728c(oldirq);
    return 1;
}
void func_020687c8(void);
