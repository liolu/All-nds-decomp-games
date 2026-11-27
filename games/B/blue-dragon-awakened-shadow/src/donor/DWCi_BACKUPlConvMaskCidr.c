/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_BACKUPlConvMaskCidr from https://github.com/ntrtwl/NitroDWC libraries/bm/src/dwc_backup.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
extern u8 DWCi_BACKUPlConvMaskCidr(const u8 *mask);
u8 DWCi_BACKUPlConvMaskCidr(const u8 *mask) {
    int snm;
    int i;

    for (i = 0, snm = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            if ((mask[i] >> j) & 1) {
                snm++;
            }
        }
    };

    return snm;
}
