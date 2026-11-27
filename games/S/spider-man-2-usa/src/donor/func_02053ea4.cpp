/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_0209941c from projets/pokemon-dash/src/donor/func_0209941c.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern "C" {
extern int func_02053dd8(void);
}
extern "C" {
int func_02053ea4(int a) {
    volatile unsigned short *imeReg = (volatile unsigned short *) 0x4000208;
    volatile int *sqrtParam         = (volatile int *) 0x40002b8;
    unsigned short savedIME;
    if (a <= 0) {
        return 0;
    }
    savedIME                               = *imeReg;
    *imeReg                                = 0;
    *(volatile unsigned short *) 0x40002b0 = 1;
    sqrtParam[0]                           = 0;
    sqrtParam[1]                           = a;
    *imeReg;
    *imeReg = savedIME;
    return func_02053dd8();
}
}
extern "C" {
extern int func_02053dd8(void);
}
