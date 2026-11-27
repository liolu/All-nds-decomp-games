/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* resetBgPriorities from https://github.com/ReGame-Labs/dwds_decomp src/engine/system/display.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef volatile u16 vu16;
extern void func_020ed250(void);
void func_020ed250(void) {
    (*(vu16 *) 0x04000008) &= ~0x3;
    (*(vu16 *) 0x0400000A) = ((*(vu16 *) 0x0400000A) & ~0x3) | 1;
    (*(vu16 *) 0x0400000C) = ((*(vu16 *) 0x0400000C) & ~0x3) | 2;
    (*(vu16 *) 0x0400000E) = ((*(vu16 *) 0x0400000E) & ~0x3) | 3;
    (*(vu16 *) 0x04001008) &= ~0x3;
    (*(vu16 *) 0x0400100A) = ((*(vu16 *) 0x0400100A) & ~0x3) | 1;
    (*(vu16 *) 0x0400100C) = ((*(vu16 *) 0x0400100C) & ~0x3) | 2;
    (*(vu16 *) 0x0400100E) = ((*(vu16 *) 0x0400100E) & ~0x3) | 3;
}
