/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c0760 from https://github.com/LagoLunatic/ooe libs/GameSpy/qr2/qr2.c (license: CC0-1.0), reused by
 * tools/donor_match.py
 */
typedef unsigned char uchar;
uchar func_020c0718(uchar c);
void func_020c0760(uchar *ins, int size, uchar *result) {
    int i, pos;
    uchar trip[3];
    uchar kwart[4];

    i = 0;
    while (i < size) {
        for (pos = 0; pos <= 2; pos++, i++) {
            if (i < size) {
                trip[pos] = *ins++;
            } else {
                trip[pos] = '\0';
            }
        }
        kwart[0] = (unsigned char) ((trip[0]) >> 2);
        kwart[1] = (unsigned char) ((((trip[0]) & 3) << 4) + ((trip[1]) >> 4));
        kwart[2] = (unsigned char) ((((trip[1]) & 15) << 2) + ((trip[2]) >> 6));
        kwart[3] = (unsigned char) ((trip[2]) & 63);
        for (pos = 0; pos <= 3; pos++) {
            *result++ = func_020c0718(kwart[pos]);
        }
    }
    *result = '\0';
}
