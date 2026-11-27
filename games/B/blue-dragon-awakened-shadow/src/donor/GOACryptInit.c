/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GOACryptInit from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_crypt.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef struct _GOACryptState {
    unsigned char cards[256];
    unsigned char rotor;
    unsigned char ratchet;
    unsigned char avalanche;
    unsigned char last_plain;
    unsigned char last_cipher;
} GOACryptState;
extern void GOACryptInit(GOACryptState *state, unsigned char *key, unsigned char keysize);
extern void GOAHashInit(GOACryptState *state);
unsigned char keyrand(GOACryptState *state, int limit, unsigned char *user_key, unsigned char keysize, unsigned char *rsum,
                      unsigned *keypos);
void GOAHashInit(GOACryptState *state);
void GOACryptInit(GOACryptState *state, unsigned char *key, unsigned char keysize) {
#line 70
    int i;
    unsigned char toswap, swaptemp, rsum;
    unsigned keypos;

    if (keysize < 1) {
        GOAHashInit(state);
        return;
    }

    for (i = 0; i < 256; i++) {
        state->cards[i] = (unsigned char) (i);
    }

    toswap = 0;
    keypos = 0;
    rsum   = 0;
    for (i = 255; i >= 0; i--) {
        toswap               = keyrand(state, i, key, keysize, &rsum, &keypos);
        swaptemp             = state->cards[i];
        state->cards[i]      = state->cards[toswap];
        state->cards[toswap] = swaptemp;
    }

    state->rotor       = state->cards[1];
    state->ratchet     = state->cards[3];
    state->avalanche   = state->cards[5];
    state->last_plain  = state->cards[7];
    state->last_cipher = state->cards[rsum];

    toswap = swaptemp = rsum = 0;
    keypos                   = 0;
}
