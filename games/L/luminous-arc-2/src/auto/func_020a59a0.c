/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a59a0 from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_crypt.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef struct _GOACryptState {
    unsigned char cards[256];
    unsigned char rotor;
    unsigned char ratchet;
    unsigned char avalanche;
    unsigned char last_plain;
    unsigned char last_cipher;
} GOACryptState;
extern unsigned char func_020a59a0(GOACryptState *state, unsigned char b);
unsigned char func_020a59a0(GOACryptState *state, unsigned char b) {
    unsigned char swaptemp;

    state->ratchet                   = (unsigned char) (state->ratchet + state->cards[state->rotor++]);
    swaptemp                         = state->cards[state->last_cipher];
    state->cards[state->last_cipher] = state->cards[state->ratchet];
    state->cards[state->ratchet]     = state->cards[state->last_plain];
    state->cards[state->last_plain]  = state->cards[state->rotor];
    state->cards[state->rotor]       = swaptemp;
    state->avalanche                 = (unsigned char) (state->avalanche + state->cards[swaptemp]);
#line 185
    state->last_plain =
        (unsigned char) (b ^ state->cards[(state->cards[state->avalanche] + state->cards[state->rotor]) & 0xFF] ^
                         state->cards[state->cards[(state->cards[state->last_plain] + state->cards[state->last_cipher] +
                                                    state->cards[state->ratchet]) &
                                                   0xFF]]);
    state->last_cipher = b;
    return state->last_plain;
}
