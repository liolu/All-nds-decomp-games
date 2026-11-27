/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02052568 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_02052568.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef signed long s32;
typedef s32 (*Callback0219e3ec)(void *, s32);
extern void *data_0210f060;
extern s32 func_0204e494(void *);
void func_020599f4(void *a0, void *a1) {
    Callback0219e3ec cb = *(Callback0219e3ec *) ((u8 *) data_0210f060 + 0x60c);
    if (cb == ((void *) 0)) {
        return;
    }
    s32 result = func_0204e494(a0);
    cb         = *(Callback0219e3ec *) ((u8 *) data_0210f060 + 0x60c);
    cb(a1, result);
}
