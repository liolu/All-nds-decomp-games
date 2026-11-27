/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* rawip from https://github.com/ntrtwl/NitroWiFi libraries/cps/src/network.c (license: none), reused by tools/donor_match.py
 */
typedef unsigned char u8;
typedef unsigned long u32;
typedef int BOOL;
typedef u32 CPSInAddr;
u32 strtol10(u8 *s, u8 **endptr);
BOOL rawip(u8 *name, CPSInAddr *pip) {
    u8 *next;
    CPSInAddr ip = 0;

    for (int i = 0; i < 4; i++) {
        ip <<= 8;
        u32 field = strtol10(name, &next);

        if (name == next) {
            return 0;
        }

        name = next;

        if (field > 255 || (i != 3 && *name++ != '.') || (i == 3 && *name != '\0')) {
            return 0;
        }

        ip |= field;
    }

    *pip = ip;
    return 1;
}
