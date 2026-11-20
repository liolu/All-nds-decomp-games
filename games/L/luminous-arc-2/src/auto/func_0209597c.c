/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209597c from https://github.com/ntrtwl/NitroWiFi libraries/wcm/src/util.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
extern void func_0209597c(u8 rssi);
extern u8 data_02170cf4[16];
extern u8 data_02170cf0;
void func_0209597c(u8 rssi) {
    u8 raw;

    if (rssi & 0x02) {
        raw = (u8) (rssi >> 2);
    } else {
        raw = (u8) (25 + (rssi >> 2));
    }

    data_02170cf4[data_02170cf0 % 16] = raw;
    if (data_02170cf0 >= 16) {
        data_02170cf0 = (u8) (((1 + data_02170cf0) % 16) + 16);
    } else {
        data_02170cf0++;
    }
}
