/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MicStopAutoSampling from https://github.com/Project-Holon/aletheia src/game/arm9/mic.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int BOOL;
extern BOOL func_020dacd4(void);
extern int func_020d66c4(int fifotag, u32 data, BOOL err);
extern BOOL func_020dacd4(void);
BOOL func_020dacd4(void) {
    if (func_020d66c4(9, 0x03004200, 0) >= 0) {
        return 1;
    }
    return 0;
}
