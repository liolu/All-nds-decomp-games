/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gs_encrypt from https://github.com/LagoLunatic/ooe libs/GameSpy/qr2/qr2.c (license: CC0-1.0), reused by tools/donor_match.py
 */
typedef unsigned char uchar;
void swap_byte(uchar *a, uchar *b);
void gs_encrypt(uchar *key, int key_len, uchar *buffer_ptr, int buffer_len) {
    short counter;
    uchar x, y, xorIndex;
    uchar state[256];

    for (counter = 0; counter < 256; counter++) {
        state[counter] = (uchar) counter;
    }

    x = 0;
    y = 0;
    for (counter = 0; counter < 256; counter++) {
        y = (uchar) ((key[x] + state[counter] + y) % 256);
        x = (uchar) ((x + 1) % key_len);
        swap_byte(&state[counter], &state[y]);
    }

    x = 0;
    y = 0;
    for (counter = 0; counter < buffer_len; counter++) {
        x = (uchar) ((x + buffer_ptr[counter] + 1) % 256);
        y = (uchar) ((state[x] + y) % 256);
        swap_byte(&state[x], &state[y]);
        xorIndex = (uchar) ((state[x] + state[y]) % 256);
        buffer_ptr[counter] ^= state[xorIndex];
    }
}
