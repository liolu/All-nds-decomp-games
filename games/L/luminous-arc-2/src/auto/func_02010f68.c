/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned short u16;
typedef unsigned long u32;
typedef struct RTCTime {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;
extern void func_0200dcec(void);
extern int func_0200de74(RTCTime *time);
extern u32 data_020ee744;

/* Ov105_WM_GetNextTgid from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/wm/calls/Ov105_WM_GetNextTgid.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
u16 func_02010f68(void) {
    enum {
        TGID_DEFAULT = (1 << 16)
    };

    if (data_020ee744 == (u32) TGID_DEFAULT) {
        RTCTime rt[1];
        func_0200dcec();
        if (func_0200de74(rt) == 0) {
            data_020ee744 = (u16) (rt->second + (rt->minute << 8));
        }
    }

    data_020ee744 = (u16) (data_020ee744 + 1);
    return (u16) data_020ee744;
}
