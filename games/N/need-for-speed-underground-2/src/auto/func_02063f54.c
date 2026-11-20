/* compiler: 1.2/sp2p3 */
/* func_020a74e0 from projets/pokemon-dash/src/donor/func_020a74e0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
extern s32 _ZN3IRQ7DisableEv(void);
extern u16 func_020595f4(void *);
extern s32 func_02059694(void *);
extern void _ZN3IRQ7RestoreEj(s32);
extern void WaitByLoop(s32);
void func_02063f54(void *arg0, u32 *arg1) {
    for (;;) {
        arg1[1] = _ZN3IRQ7DisableEv();
        arg1[0] = func_020595f4((void *) 0x27FFFE8) & 0x40;
        if (arg1[0] != 0) {
            return;
        }
        if (func_02059694(arg0) == 0) {
            return;
        }
        _ZN3IRQ7RestoreEj(arg1[1]);
        WaitByLoop(1);
    }
}
