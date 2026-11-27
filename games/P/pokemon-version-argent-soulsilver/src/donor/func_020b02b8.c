/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WCMi_GetRssiAverage from projets/blue-dragon-awakened-shadow/src/donor/WCMi_GetRssiAverage.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed long s32;
extern u8 func_020b02b8(void);
extern u8 data_021d6040[16];
extern u8 data_021d603c;
u8 func_020b02b8(void) {
    s32 sum = 0;
    s32 i;

    if (data_021d603c > 16) {
        for (i = 0; i < 16; i++) {
            sum += data_021d6040[i];
        }

        sum /= 16;
    } else if (data_021d603c > 0) {
        for (i = 0; i < data_021d603c; i++) {
            sum += data_021d6040[i];
        }

        sum /= data_021d603c;
    }

    return (u8) sum;
}
