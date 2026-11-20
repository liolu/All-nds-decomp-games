/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c1cbc from https://github.com/LagoLunatic/ooe libs/GameSpy/qr2/qr2regkeys.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern const char *data_0212fd8c[];
extern void func_020c1cbc(int keyid, const char *key);
extern void func_020c1cbc(int keyid, const char *key);
extern void func_020c1cbc(int keyid, const char *key);
extern const char *data_0212fd8c[254];
void func_020c1cbc(int keyid, const char *key) {

    ;

    if (keyid < 50 || keyid > 254) {

        ;
        return;
    }

    ;

    data_0212fd8c[keyid] = key;
}
