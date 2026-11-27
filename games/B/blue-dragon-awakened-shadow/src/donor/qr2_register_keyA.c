/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* qr2_register_keyA from https://github.com/LagoLunatic/ooe libs/GameSpy/qr2/qr2regkeys.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern const char *qr2_registered_key_list[];
extern void qr2_register_keyA(int keyid, const char *key);
extern void qr2_register_keyA(int keyid, const char *key);
extern void qr2_register_keyA(int keyid, const char *key);
extern const char *qr2_registered_key_list[254];
void qr2_register_keyA(int keyid, const char *key) {

    ;

    if (keyid < 50 || keyid > 254) {

        ;
        return;
    }

    ;

    qr2_registered_key_list[keyid] = key;
}
