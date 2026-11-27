/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203ebcc from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_0203ebcc.c (license: MIT), reused
 * by tools/donor_match.py */
extern int WCM_GetPhase(void);
extern void *func_020449a8(int a);
extern int func_02045ad0(int a0);
extern int WCM_StartupAsync(void *buf, void *cb);
extern void func_020451c0(void *p);
extern void func_02044a7c(int a);
int func_02046784(void) {
    int state  = WCM_GetPhase();
    void *base = func_020449a8(0x10);
    if (state == 1) {
        int rec[4];
        rec[0] = ((unsigned char *) base)[0xd0a];
        rec[1] = 0;
        rec[2] = 0;
        rec[3] = 0;
        func_02045ad0(0);
        int r = WCM_StartupAsync(rec, (void *) func_020451c0);
        if (r == 1 || r >= 4) {
            func_02044a7c(1);
            return 0x11;
        }
    } else {
        return 1;
    }
    return 2;
}
