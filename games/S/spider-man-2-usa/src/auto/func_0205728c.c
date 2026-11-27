/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Os_GetDebugSystemFlags from https://github.com/RonyxDumb/mkds src/arm9/0200e7b0_Os_GetDebugSystemFlags.c (license: none),
 * reused by tools/donor_match.py */
extern int func_020566e4(void);
extern unsigned int _ZN3IRQ7DisableEv(void);
extern int func_0205674c(unsigned short *p);
extern int func_020567ec(int x);
extern int func_0205680c(int a);
extern void _ZN3IRQ7RestoreEj(unsigned int flags);
int func_0205728c(void) {
    int result;
    int done = 0;
    int x;
    int res;
    unsigned int irq;

    x      = (unsigned short) func_020566e4();
    result = done;

    do {
        res = -1;
        irq = _ZN3IRQ7DisableEv();
        if ((func_0205674c((unsigned short *) 0x027fffe8) & 0x40) != 0 || (res = func_020567ec(x)) == 0) {
            if (*(unsigned int *) 0x8000000 == 0x544e494e && *(unsigned int *) 0x8000004 == 0x4f444e45) {
                result = 0x1000000;
            } else {
                result = 0x2000000;
            }
            if (res == 0) {
                func_0205680c(x);
                done = 1;
            }
        }
        _ZN3IRQ7RestoreEj(irq);
    } while (done == 0);

    return result;
}
