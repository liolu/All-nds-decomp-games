/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* decodeSSID from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_ac_shop_usb.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef struct CTable {
    unsigned char b[24];
} CTable;
extern void func_02046da8(char *ssid, unsigned char *buf);
extern int func_02047114(char *src, unsigned char *dest, unsigned long srcsize, unsigned long destsize);
extern const CTable data_020e4cc3;
extern char *data_020f91a4[4];
void func_02046da8(char *ssid, unsigned char *buf) {
    int i;
    CTable ctable_inv;
    unsigned char destnum;
    unsigned char dest;
    unsigned char srcnum;
    unsigned char src;

    ctable_inv = data_020e4cc3;
    func_02047114(ssid, buf, 32, 24);
    for (i = 0; i < 24; i++) {
        buf[i] = buf[i] ^ data_020f91a4[2][i];
    }
    for (i = 0; i < 24; i++) {
        destnum = (unsigned char) i;
        srcnum  = (unsigned char) i;
        src     = buf[i];
        while (ctable_inv.b[srcnum] != 0xff) {
            dest                       = buf[ctable_inv.b[srcnum]];
            buf[ctable_inv.b[destnum]] = src;
            destnum                    = ctable_inv.b[srcnum];
            ctable_inv.b[srcnum]       = 0xff;
            srcnum                     = destnum;
            src                        = dest;
        }
    }
    for (i = 0; i < 24; i++) {
        buf[i] = buf[i] ^ data_020f91a4[0][i];
    }
}
int func_02047114(char *src, unsigned char *dest, unsigned long srcsize, unsigned long destsize);
