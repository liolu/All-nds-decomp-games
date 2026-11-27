/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GOAHashInit from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_crypt.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef struct _GOACryptState {
    unsigned char cards[256];
    unsigned char rotor;
    unsigned char ratchet;
    unsigned char avalanche;
    unsigned char last_plain;
    unsigned char last_cipher;
} GOACryptState;
extern void GOAHashInit(GOACryptState *state);
void GOAHashInit(GOACryptState *state) {

    int i, j;

    state->rotor       = 1;
    state->ratchet     = 3;
    state->avalanche   = 5;
    state->last_plain  = 7;
    state->last_cipher = 11;

    for (i = 0, j = 255; i < 256; i++, j--) {
        state->cards[i] = (unsigned char) j;
    }
}
