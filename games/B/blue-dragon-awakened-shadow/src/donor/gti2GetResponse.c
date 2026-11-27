/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gti2GetResponse from https://github.com/LagoLunatic/ooe libs/GameSpy/gt2/gt2Auth.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned long size_t;
extern size_t strlen(const char *str);
extern int abs(int num);
extern int rand();
typedef unsigned char GT2Byte;
extern char GT2ChallengeKey[33];
extern GT2Byte *gti2GetResponse(GT2Byte *buffer, const GT2Byte *challenge);
extern char GT2ChallengeKey[33];
int gti2VerifyChallenge(const GT2Byte *buffer);
GT2Byte *gti2GetResponse(GT2Byte *buffer, const GT2Byte *challenge) {
    int i;
    int valid;
    char cchar;
    int keylen = (int) strlen(GT2ChallengeKey);
    int chalrand;
    valid = gti2VerifyChallenge(challenge);

    for (i = 0; i < 32; i++) {

        if (!valid || i == 0 || i == 13) {
            buffer[i] = (GT2Byte) (33 + rand() % 93);
        } else {
            if (i == 1 || i == 14) {
                cchar = (char) challenge[i];
            } else {
                cchar = (char) challenge[i - 1];
            }
            chalrand  = abs((challenge[((i * challenge[i]) + GT2ChallengeKey[(i + challenge[i]) % keylen]) % 32] ^
                            GT2ChallengeKey[(i * 17991 * cchar) % keylen]));
            buffer[i] = (GT2Byte) (33 + chalrand % 93);
        }
    }
    return buffer;
}
