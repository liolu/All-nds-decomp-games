/* compiler: 1.2/sp2p3 */
/* func_020a74e0 from projets/pokemon-dash/src/donor/func_020a74e0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
extern s32 _ZN3IRQ7DisableEv(void);
extern u16 func_02069448(void *);
extern s32 func_020694e8(void *);
extern void _ZN3IRQ7RestoreEj(s32);
extern void WaitByLoop(s32);
void func_02070f94(void *arg0, u32 *arg1) {
    for (;;) {
        arg1[1] = _ZN3IRQ7DisableEv();
        arg1[0] = func_02069448((void *) 0x27FFFE8) & 0x40;
        if (arg1[0] != 0) {
            return;
        }
        if (func_020694e8(arg0) == 0) {
            return;
        }
        _ZN3IRQ7RestoreEj(arg1[1]);
        WaitByLoop(1);
    }
}
