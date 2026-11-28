/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Ov105_WM_GetNextTgid from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/wm/calls/Ov105_WM_GetNextTgid.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef struct RTCTime {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;
extern void func_02025360(void);
extern int func_020252a0(RTCTime *time);
extern u32 data_020dffc8;
u16 func_0202b178(void) {
    enum {
        TGID_DEFAULT = (1 << 16)
    };

    if (data_020dffc8 == (u32) TGID_DEFAULT) {
        RTCTime rt[1];
        func_02025360();
        if (func_020252a0(rt) == 0) {
            data_020dffc8 = (u16) (rt->second + (rt->minute << 8));
        }
    }

    data_020dffc8 = (u16) (data_020dffc8 + 1);
    return (u16) data_020dffc8;
}
