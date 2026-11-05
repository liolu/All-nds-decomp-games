/* compiler: 1.2/sp2p3  */
/* CTRDGi_LockByProcessor from projets/rayman-rr/src/auto/CTRDGi_LockByProcessor.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
extern unsigned long func_0201e3b0(void);
extern u16 func_0201c408(void *p);
extern s32 func_0201c4a8(void *p);
extern unsigned long func_0201e3c4(unsigned long ulState);
extern void WaitByLoop(s32 n);
void func_02024a20(void *p0, u32 *p1) {
    void *lock;
    s32 one;

    lock = (void *) 0x027fffe8;
    one  = 1;
    while (1) {
        p1[1] = func_0201e3b0();
        p1[0] = func_0201c408(lock) & 0x40;
        if (p1[0] != 0) {
            return;
        }
        if (func_0201c4a8(p0) == 0) {
            return;
        }
        func_0201e3c4(p1[1]);
        WaitByLoop(one);
    }
}
