/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Util_RandInt from https://github.com/LagoLunatic/ooe libs/GameSpy/common/gsPlatformUtil.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern int Util_RandInt(int low, int high);
long longrand(void);
int Util_RandInt(int low, int high) {
    unsigned int range = (unsigned int) high - low;
    int num;

    if (range == 0) {
        return (low);
    }

    num = (int) (longrand() % range);

    return (num + low);
}
