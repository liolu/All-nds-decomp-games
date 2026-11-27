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
extern const struct SNDCommand *func_02063cf0(u32 flags);
extern BOOL func_02063a4c(u32 flags);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_0205c948(void);
extern OSIntrMode func_0205c95c(OSIntrMode state);
extern void func_0205c9b8(u32 cycles);
extern void func_0205bba4(register const void *startAddr, register u32 nBytes);
extern s32 func_0205cd10(s32 fifotag, u32 data, BOOL err);
extern struct SNDCommand data_0211cae0[256];
extern struct SNDCommand *data_0211c83c[8 + 1];
extern struct SNDCommand *data_0211c820;
extern struct SNDCommand *data_0211c824;
extern s32 data_0211c830;
extern s32 data_0211c834;
extern u32 data_0211c838;
extern void func_020637b8(void);
const struct SNDCommand *func_02063cf0(u32 flags);
BOOL func_02063a4c(u32 flags) {
    OSIntrMode oldirq = func_0205c948();

    if (data_0211c820 == ((void *) 0)) {
        (void) func_0205c95c(oldirq);
        return 1;
    }

    if (data_0211c834 >= 8) {
        if ((flags & 0x1) == 0) {
            (void) func_0205c95c(oldirq);
            return 0;
        }

        do {
            (void) func_02063cf0(0x1);
        } while (data_0211c834 >= 8);
    }

    func_0205bba4(data_0211cae0, sizeof(data_0211cae0));

    s32 result = func_0205cd10(7, (u32) data_0211c820, 0);
    if (result < 0) {
        if ((flags & 0x1) == 0) {
            (void) func_0205c95c(oldirq);
            return 0;
        }

        result = func_0205cd10(7, (u32) data_0211c820, 0);
        while (result < 0) {
            (void) func_0205c95c(oldirq);
            func_0205c9b8(100);
            oldirq = func_0205c948();
            result = func_0205cd10(7, (u32) data_0211c820, 0);
        }
    }

    if ((flags & 0x2) != 0) {
        func_020637b8();
    }

    data_0211c83c[data_0211c830] = data_0211c820;

    if (++data_0211c830 > 8) {
        data_0211c830 = 0;
    }

    data_0211c820 = ((void *) 0);
    data_0211c824 = ((void *) 0);
    data_0211c834++;
    data_0211c838++;

    (void) func_0205c95c(oldirq);
    return 1;
}
void func_020637b8(void);
