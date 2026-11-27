/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WCMi_GetRssiAverage from https://github.com/ntrtwl/NitroWiFi libraries/wcm/src/util.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed long s32;
extern u8 WCMi_GetRssiAverage(void);
extern u8 wcmRssi[16];
extern u8 wcmRssiIndex;
u8 WCMi_GetRssiAverage(void) {
    s32 sum = 0;
    s32 i;

    if (wcmRssiIndex > 16) {
        for (i = 0; i < 16; i++) {
            sum += wcmRssi[i];
        }

        sum /= 16;
    } else if (wcmRssiIndex > 0) {
        for (i = 0; i < wcmRssiIndex; i++) {
            sum += wcmRssi[i];
        }

        sum /= wcmRssiIndex;
    }

    return (u8) sum;
}
