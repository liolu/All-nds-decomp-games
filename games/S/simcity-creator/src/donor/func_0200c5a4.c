/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PM_GetAmp from https://github.com/RonyxDumb/mkds src/arm9/0214f630_func_0214f630.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef enum {
    PM_AMP_OFF = 0,
    PM_AMP_ON  = 1
} PMAmpSwitch;
extern u32 func_0200c5a4(PMAmpSwitch *swBuf);
extern u32 func_0200c260(u16 registerAddr, u16 *buffer);
extern const u16(*ctrdgi_fl_maxtime);
u32 func_0200c260(u16 registerAddr, u16 *buffer);
u32 func_0200c5a4(PMAmpSwitch *swBuf) {
    u16 reg;
    u32 result;

    if ((result = func_0200c260(2, &reg)) == 0) {
        if (swBuf) {
            *swBuf = (PMAmpSwitch) reg;
        }
    }

    return result;
}
