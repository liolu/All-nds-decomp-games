/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* makeUsbWepKey from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_ac_shop_usb.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned int u32;
extern void MI_CpuCopy8(const void *srcp, void *dstp, u32 size);
extern void func_02046ef8(unsigned char *seed, unsigned char *wepkey);
extern char *data_020f91a4[4];
extern const unsigned char data_020e4cdc[13];
extern const unsigned char data_020e4cec[16];
void func_02046ef8(unsigned char *seed, unsigned char *wepkey) {
    int i;
    unsigned char keytemp[13];

    for (i = 0; i < 13; i++) {
        wepkey[i] = seed[i] ^ seed[13 + i % 7];
    }
    for (i = 0; i < 7; i++) {
        wepkey[3 + i] = wepkey[3 + i] ^ seed[13 + i];
    }
    for (i = 0; i < 13; i++) {
        wepkey[i] = wepkey[i] ^ data_020f91a4[1][i];
    }
    MI_CpuCopy8(wepkey, keytemp, 13);
    for (i = 0; i < 13; i++) {
        wepkey[data_020e4cdc[i]] = keytemp[i];
    }
    for (i = 0; i < 13; i++) {
        wepkey[i] = wepkey[i] ^ data_020f91a4[3][i];
    }
    for (i = 0; i < 13; i++) {
        wepkey[i] = (unsigned char) ((data_020e4cec[(wepkey[i] >> 4) & 0xf] << 4) | data_020e4cec[wepkey[i] & 0xf]);
    }
    for (i = 0; i < 3; i++) {
        wepkey[i] ^= wepkey[i + 6];
        wepkey[i + 3] ^= wepkey[i + 9];
        wepkey[i + 6] ^= wepkey[i + 3];
        wepkey[i + 9] ^= wepkey[i];
        wepkey[12] ^= wepkey[i];
    }
}
