/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b036c from https://github.com/ntrtwl/NitroWiFi libraries/wcm/src/util.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
extern void func_020b036c(u8 rssi);
extern u8 data_021d6040[16];
extern u8 data_021d603c;
void func_020b036c(u8 rssi) {
    u8 raw;

    if (rssi & 0x02) {
        raw = (u8) (rssi >> 2);
    } else {
        raw = (u8) (25 + (rssi >> 2));
    }

    data_021d6040[data_021d603c % 16] = raw;
    if (data_021d603c >= 16) {
        data_021d603c = (u8) (((1 + data_021d603c) % 16) + 16);
    } else {
        data_021d603c++;
    }
}
