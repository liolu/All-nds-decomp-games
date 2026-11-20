/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020bab60 from https://github.com/LagoLunatic/ooe libs/GameSpy/gt2/gt2Auth.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef int GT2Bool;
typedef unsigned char GT2Byte;
extern GT2Bool func_020bab60(const GT2Byte *response1, const GT2Byte *response2);
GT2Bool func_020bab60(const GT2Byte *response1, const GT2Byte *response2) {
    int i;
    for (i = 0; i < 32; i++) {
        if (i != 0 && i != 13 && response1[i] != response2[i]) {
            return 0;
        }
    }
    return 1;
}
