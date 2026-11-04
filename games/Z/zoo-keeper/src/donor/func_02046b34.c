/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02058054 from projets/children-of-mana/src/auto/func_02058054.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_02046b34(void);
extern void func_020468b0(volatile void *fifo);
void func_02046b34(void) {
    func_020468b0(((vu32 *) 0x04000400));
    while ((*(vu32 *) 0x04000600) & 0x8000000) {
    }
}
extern void func_020468b0(register volatile void *fifo);
