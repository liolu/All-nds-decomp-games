/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020aaf90 from https://github.com/LagoLunatic/ooe libs/GameSpy/common/gsPlatformUtil.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned long size_t;
extern void func_02018eb8(void *dest, int ch, size_t count);
extern void func_020aaf90(const char *input, char *output, int inlen, int *outlen, int encodingType);
void func_020aae9c(char *quart, char *trip, int inlen);
extern const char data_020ddf80[];
extern const char data_020ddf78[];
extern const char data_020ddf7c[];
void func_020aaf90(const char *input, char *output, int inlen, int *outlen, int encodingType) {
    const char *encoding = 0;
    const char *holdin   = input;
    int readpos          = 0;
    int writepos         = 0;
    char block[4];

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

    {};
    ;
    if (inlen <= 0) {
        if (outlen) {
            *outlen = 0;
        }
        output[0] = '\0';
        return;
    }

    while (readpos < inlen && input[readpos] != encoding[2]) {

        if (input[readpos] >= '0' && input[readpos] <= '9') {
            block[readpos % 4] = (char) (input[readpos] - 48 + 52);
        } else if (input[readpos] >= 'a' && input[readpos] <= 'z') {
            block[readpos % 4] = (char) (input[readpos] - 71);
        } else if (input[readpos] >= 'A' && input[readpos] <= 'Z') {
            block[readpos % 4] = (char) (input[readpos] - 65);
        } else if (input[readpos] == encoding[0]) {
            block[readpos % 4] = 62;
        } else if (input[readpos] == encoding[1]) {
            block[readpos % 4] = 63;
        }

        else if (input[readpos] == encoding[2]) {
            break;
        } else if (input[readpos] == '\0') {
            break;
        } else {

            if (outlen) {
                *outlen = 0;
            }
            output[0] = '\0';
            return;
        }

        if (readpos % 4 == 3) {
            func_020aae9c(block, &output[writepos], 4);
            writepos += 3;
        }
        readpos++;
    }

    if ((readpos != 0) && (readpos % 4 != 0)) {

        func_02018eb8(&block[readpos % 4], encoding[2], (unsigned int) 4 - (readpos % 4));
        func_020aae9c(block, &output[writepos], readpos % 4);

        if (readpos % 4 == 3) {
            writepos += 2;
        } else {
            writepos += 1;
        }
    }

    if (outlen) {
        *outlen = writepos;
    }

    {
        void *y = &holdin;
        y       = 0;
    };
}
