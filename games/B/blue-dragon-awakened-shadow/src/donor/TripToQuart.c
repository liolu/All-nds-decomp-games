/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* TripToQuart from https://github.com/LagoLunatic/ooe libs/GameSpy/common/gsPlatformUtil.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
void TripToQuart(const char *trip, char *quart, int inlen) {
    unsigned char triptemp[3];
    int i;
    for (i = 0; i < inlen; i++) {
        triptemp[i] = (unsigned char) trip[i];
    }
    while (i < 3) {
        triptemp[i] = 0;
        i++;
    }
    quart[0] = (char) (triptemp[0] >> 2);
    quart[1] = (char) (((triptemp[0] & 3) << 4) | (triptemp[1] >> 4));
    quart[2] = (char) ((triptemp[1] & 0x0F) << 2 | (triptemp[2] >> 6));
    quart[3] = (char) (triptemp[2] & 0x3F);
}
