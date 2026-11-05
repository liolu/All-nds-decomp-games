/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063a4c from projets/children-of-mana/src/auto/func_02063a4c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
struct SNDCommand {
    struct SNDCommand *llNext;
    s32 id;
    u32 arg[4];
};
extern const struct SNDCommand *func_0201f304(u32 flags);
extern BOOL func_0201f060(u32 flags);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_0201e3b0(void);
extern OSIntrMode func_0201e3c4(OSIntrMode state);
extern void func_0201e414(u32 cycles);
extern void func_0201d638(register const void *startAddr, register u32 nBytes);
extern s32 func_0201f7e4(s32 fifotag, u32 data, BOOL err);
extern struct SNDCommand data_0203e3c0[256];
extern struct SNDCommand *data_0203e10c[8 + 1];
extern struct SNDCommand *data_0203e0f0;
extern struct SNDCommand *data_0203e0f4;
extern s32 data_0203e100;
extern s32 data_0203e104;
extern u32 data_0203e108;
extern void func_0201eef0(void);
extern const struct SNDCommand *func_0201f304(u32 flags);
BOOL func_0201f060(u32 flags) {
    OSIntrMode oldirq = func_0201e3b0();

    if (data_0203e0f0 == ((void *) 0)) {
        (void) func_0201e3c4(oldirq);
        return 1;
    }

    if (data_0203e104 >= 8) {
        if ((flags & 0x1) == 0) {
            (void) func_0201e3c4(oldirq);
            return 0;
        }

        do {
            (void) func_0201f304(0x1);
        } while (data_0203e104 >= 8);
    }

    func_0201d638(data_0203e3c0, sizeof(data_0203e3c0));

    s32 result = func_0201f7e4(7, (u32) data_0203e0f0, 0);
    if (result < 0) {
        if ((flags & 0x1) == 0) {
            (void) func_0201e3c4(oldirq);
            return 0;
        }

        result = func_0201f7e4(7, (u32) data_0203e0f0, 0);
        while (result < 0) {
            (void) func_0201e3c4(oldirq);
            func_0201e414(100);
            oldirq = func_0201e3b0();
            result = func_0201f7e4(7, (u32) data_0203e0f0, 0);
        }
    }

    if ((flags & 0x2) != 0) {
        func_0201eef0();
    }

    data_0203e10c[data_0203e100] = data_0203e0f0;

    if (++data_0203e100 > 8) {
        data_0203e100 = 0;
    }

    data_0203e0f0 = ((void *) 0);
    data_0203e0f4 = ((void *) 0);
    data_0203e104++;
    data_0203e108++;

    (void) func_0201e3c4(oldirq);
    return 1;
}
extern void func_0201eef0(void);
