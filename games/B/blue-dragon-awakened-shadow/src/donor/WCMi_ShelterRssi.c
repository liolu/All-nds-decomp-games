/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WCMi_ShelterRssi from https://github.com/ntrtwl/NitroWiFi libraries/wcm/src/util.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
extern void WCMi_ShelterRssi(u8 rssi);
extern u8 wcmRssi[16];
extern u8 wcmRssiIndex;
void WCMi_ShelterRssi(u8 rssi) {
    u8 raw;

    if (rssi & 0x02) {
        raw = (u8) (rssi >> 2);
    } else {
        raw = (u8) (25 + (rssi >> 2));
    }

    wcmRssi[wcmRssiIndex % 16] = raw;
    if (wcmRssiIndex >= 16) {
        wcmRssiIndex = (u8) (((1 + wcmRssiIndex) % 16) + 16);
    } else {
        wcmRssiIndex++;
    }
}
