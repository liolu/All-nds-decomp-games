/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWC_BACKUPlCheckSsid from https://github.com/ntrtwl/NitroDWC libraries/bm/src/dwc_backup.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef int BOOL;
extern BOOL DWC_BACKUPlCheckSsid(const u8 *ssid);
BOOL DWC_BACKUPlCheckSsid(const u8 *ssid) {
    for (int i = 0; i < 32; i++) {
        if (ssid[i] != 0) {
            return 1;
        }
    }

    return 0;
}
