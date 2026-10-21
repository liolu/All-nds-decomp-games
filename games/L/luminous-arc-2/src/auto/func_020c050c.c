/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c050c from https://github.com/LagoLunatic/ooe libs/GameSpy/qr2/qr2.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef int gsi_bool;
typedef struct qr2_keybuffer_s *qr2_keybuffer_t;
extern gsi_bool func_020c050c(qr2_keybuffer_t keybuffer, int keyid);
typedef unsigned char uchar;
struct qr2_keybuffer_s {
    uchar keys[254];
    int numkeys;
};
gsi_bool func_020c050c(qr2_keybuffer_t keybuffer, int keyid) {

    if (keybuffer->numkeys >= 254) {
        return ((gsi_bool) 0);
    }
    if (keyid < 1 || keyid > 254) {
        return ((gsi_bool) 0);
    }

    keybuffer->keys[keybuffer->numkeys++] = (uchar) keyid;
    return ((gsi_bool) 1);
}
