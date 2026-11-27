/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Os_GetDebugSystemFlags from https://github.com/RonyxDumb/mkds src/arm9/0200e7b0_Os_GetDebugSystemFlags.c (license: none),
 * reused by tools/donor_match.py */
extern int func_0205a8fc(void);
extern unsigned int func_0205c948(void);
extern int func_0205a964(unsigned short *p);
extern int func_0205aa04(int x);
extern int func_0205aa24(int a);
extern void func_0205c95c(unsigned int flags);
int func_0205b578(void) {
    int result;
    int done = 0;
    int x;
    int res;
    unsigned int irq;

    x      = (unsigned short) func_0205a8fc();
    result = done;

    do {
        res = -1;
        irq = func_0205c948();
        if ((func_0205a964((unsigned short *) 0x027fffe8) & 0x40) != 0 || (res = func_0205aa04(x)) == 0) {
            if (*(unsigned int *) 0x8000000 == 0x544e494e && *(unsigned int *) 0x8000004 == 0x4f444e45) {
                result = 0x1000000;
            } else {
                result = 0x2000000;
            }
            if (res == 0) {
                func_0205aa24(x);
                done = 1;
            }
        }
        func_0205c95c(irq);
    } while (done == 0);

    return result;
}
