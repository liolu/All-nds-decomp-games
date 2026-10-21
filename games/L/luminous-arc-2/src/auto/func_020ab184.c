/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020ab184 from https://github.com/LagoLunatic/ooe libs/GameSpy/common/gsPlatformUtil.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern void func_020ab184(const char *input, char *output, int inlen, int encodingType);
void func_020aaef8(const char *trip, char *quart, int inlen);
extern const char data_020ddf80[];
extern const char data_020ddf78[];
extern const char data_020ddf7c[];
void func_020ab184(const char *input, char *output, int inlen, int encodingType) {
    const char *encoding;
    char *holdout = output;
    char *lastchar;
    int todo = inlen;

    switch (encodingType) {
        case 1:
            encoding = data_020ddf78;
            break;
        case 2:
            encoding = data_020ddf7c;
            break;
        default:
            encoding = data_020ddf80;
    }

    while (todo > 0) {
        func_020aaef8(input, output, (((todo) < (3)) ? (todo) : (3)));
        output += 4;
        input += 3;
        todo -= 3;
    }
    lastchar = output;
    if (inlen % 3 == 1) {
        lastchar -= 2;
    } else if (inlen % 3 == 2) {
        lastchar -= 1;
    }
    *output = 0;
    while (output > holdout) {
        output--;
        if (output >= lastchar) {
            *output = encoding[2];
        } else if (*output <= 25) {
            *output = (char) (*output + 65);
        } else if (*output <= 51) {
            *output = (char) (*output + 71);
        } else if (*output <= 61) {
            *output = (char) (*output + 48 - 52);
        } else if (*output == 62) {
            *output = encoding[0];
        } else if (*output == 63) {
            *output = encoding[1];
        }
    }
}
