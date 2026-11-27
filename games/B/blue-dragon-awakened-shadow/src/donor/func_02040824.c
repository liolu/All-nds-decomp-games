/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_rc4_init from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_rc4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef struct CpsRc4Context {
    u8 x;
    u8 y;
    u8 s[256];
} CpsRc4Context;
extern void func_02040824(CpsRc4Context *context, const u8 *key, int length);
#pragma force_active on
void func_02040824(CpsRc4Context *context, const u8 *key, int length) {
    int a;
    u8 *s;
    int i;
    int j;
    int b;
    int k;
    s          = context->s;
    context->x = 0;
    context->y = 0;
    for (i = 0; i < 256; i++) {
        s[i] = i;
    }
    k = 0;
    j = 0;
    for (i = 0; i < 256; i++) {
        a = s[i];
        b = key[k];
        k = (k + 1) & 255;
        j = (j + (a + b)) & 255;
        b = s[j];
        if (k >= length) {
            k = 0;
        }
        s[i] = b;
        s[j] = a;
    }
}
