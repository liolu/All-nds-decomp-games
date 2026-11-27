/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
extern int _Z20DisableIRQInterruptsv();

extern void _Z20SetIRQInterruptStatei(int mask);

extern int data_021e169c[];

typedef unsigned int u32;

extern u32 OS_EnableInterrupts(void);

extern void OS_Halt(void);

extern void OSi_IdleThreadProc(void *arg);

/* OS_SetIrqWorkField30 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_SetIrqWorkField30.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_020d21c4(int arg0) {
    int mask;
    int old;
    mask               = _Z20DisableIRQInterruptsv();
    old                = data_021e169c[0xc];
    data_021e169c[0xc] = arg0;
    _Z20SetIRQInterruptStatei(mask);
    return old;
}
