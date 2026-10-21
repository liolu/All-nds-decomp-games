/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020aae9c from https://github.com/LagoLunatic/ooe libs/GameSpy/common/gsPlatformUtil.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
void func_020aae9c(char *quart, char *trip, int inlen) {
    if (inlen >= 2) {
        trip[0] = (char) (quart[0] << 2 | quart[1] >> 4);
    }
    if (inlen >= 3) {
        trip[1] = (char) ((quart[1] & 0x0F) << 4 | quart[2] >> 2);
    }
    if (inlen >= 4) {
        trip[2] = (char) ((quart[2] & 0x3) << 6 | quart[3]);
    }
}
