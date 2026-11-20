/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02095f00 from https://github.com/ntrtwl/NitroWiFi libraries/cps/src/network.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern const u16(*ctrdgi_fl_maxtime);
u32 func_02095e30(u8 *s, u32 len, u32 sum);
u16 func_02095ee4(u16 sum);
u16 func_02095f00(u8 *s, u32 len) {
    return func_02095ee4(func_02095e30(s, len, 0));
}
