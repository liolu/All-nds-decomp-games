/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
extern int func_02006be0();

extern void func_02006bf4(int mask);

extern int data_021478e0[];

typedef unsigned int u32;

extern u32 OS_EnableInterrupts(void);

extern void OS_Halt(void);

extern void OSi_IdleThreadProc(void *arg);

/* OS_SetIrqWorkField30 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_SetIrqWorkField30.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_02005434(int arg0) {
    int mask;
    int old;
    mask               = func_02006be0();
    old                = data_021478e0[0xc];
    data_021478e0[0xc] = arg0;
    func_02006bf4(mask);
    return old;
}
