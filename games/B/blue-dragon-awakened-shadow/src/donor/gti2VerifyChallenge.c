/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gti2VerifyChallenge from https://github.com/LagoLunatic/ooe libs/GameSpy/gt2/gt2Auth.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned char GT2Byte;
int gti2VerifyChallenge(const GT2Byte *buffer) {
    int oddmode = 0;
    int i;
    for (i = 1; i < 32; i++) {
        oddmode = ((buffer[i - 1] & 1) ^ (i & 1) ^ oddmode ^ (buffer[0] & 1) ^ ((buffer[0] < 79) ? 1 : 0) ^
                   ((buffer[i - 1] < buffer[0]) ? 1 : 0));
        ;
        if ((oddmode && (buffer[i] & 1) == 0) || (!oddmode && ((buffer[i] & 1) == 1))) {
            return 0;
        }
    }
    return 1;
}
