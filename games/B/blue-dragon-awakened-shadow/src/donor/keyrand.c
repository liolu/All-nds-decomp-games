/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* keyrand from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_crypt.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef struct _GOACryptState {
    unsigned char cards[256];
    unsigned char rotor;
    unsigned char ratchet;
    unsigned char avalanche;
    unsigned char last_plain;
    unsigned char last_cipher;
} GOACryptState;
unsigned char keyrand(GOACryptState *state, int limit, unsigned char *user_key, unsigned char keysize, unsigned char *rsum,
                      unsigned *keypos) {
    unsigned int u, retry_limiter, mask;

    if (!limit) {
        return 0;
    }
    retry_limiter = 0;
    mask          = 1;
    while (mask < (unsigned) limit) {
        mask = (mask << 1) + 1;
    }
    do {
        *rsum = (unsigned char) (state->cards[*rsum] + user_key[(*keypos)++]);
        if (*keypos >= keysize) {
            *keypos = 0;
            *rsum   = (unsigned char) (*rsum + keysize);
        }
        u = mask & *rsum;
        if (++retry_limiter > 11) {
            u %= (unsigned int) limit;
        }
    } while (u > (unsigned) limit);
    return (unsigned char) (u);
}
