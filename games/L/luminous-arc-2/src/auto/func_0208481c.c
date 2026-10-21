/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0208481c from https://github.com/ntrtwl/NitroDWC libraries/base/src/dwc_common.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
extern const u16(*ctrdgi_fl_maxtime);
extern u32 func_0208481c(const u16 *str);
u32 func_0208481c(const u16 *str) {
    u32 length = 0;

    while (str[length] != 0) {
        length++;
    }

    return length;
}
