/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned short u16;
typedef unsigned long u32;
typedef struct RTCTime {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;
extern void func_0200cac4(void);
extern int func_0200cba4(RTCTime *time);
extern u32 data_020c7bcc;

/* Ov105_WM_GetNextTgid from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/wm/calls/Ov105_WM_GetNextTgid.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
u16 func_0200f694(void) {
    enum {
        TGID_DEFAULT = (1 << 16)
    };

    if (data_020c7bcc == (u32) TGID_DEFAULT) {
        RTCTime rt[1];
        func_0200cac4();
        if (func_0200cba4(rt) == 0) {
            data_020c7bcc = (u16) (rt->second + (rt->minute << 8));
        }
    }

    data_020c7bcc = (u16) (data_020c7bcc + 1);
    return (u16) data_020c7bcc;
}
