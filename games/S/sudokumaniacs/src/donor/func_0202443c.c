/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02013c2c from projets/code-lyoko/src/auto/func_02013c2c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern u32 func_0201e3b0(void);
extern u32 func_0201e3c4(u32 irq_flag);
extern void func_0202450c(u32 tag, u32 data, BOOL err);
extern void func_0202443c(u32 id);
extern void func_0202450c(u32 tag, u32 data, BOOL err);
void func_0202443c(u32 id) {
    vu32 boot_id = *(u32 *) ((*(u16 *) 0x027FFC10 == 0) ? 0x027FF800 : 0x027FFC00);
    if (id != boot_id) {
        u32 prevIRQState = func_0201e3b0();
        func_0202450c(14, 17, 0);
        func_0201e3c4(prevIRQState);
    }
}
