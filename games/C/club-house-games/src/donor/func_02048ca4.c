/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* clearRawPad from https://github.com/ReGame-Labs/dwds_decomp src/engine/system/system.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef signed int s32;
struct Pad {
    u16 held;
    u16 pressed;
    u16 released;
    u16 fastRepeat;
    u16 longHeld;
    u16 repeat;
    u16 doubleTap;
    u16 prevHeld;
    s32 holdFrames;
    s32 longHoldFrames;
    s32 repeatFrames;
    s32 doubleTapFrames;
    s32 doubleTapState;
    u16 doubleTapKeys;
};
extern struct Pad data_0224d730;
extern s32 (*data_021366b8[])(void);
extern s32 (*data_02136694[])(void);
extern s32 func_020727b4();
extern void func_02048ca4(void);
void func_02048ca4(void) {
    func_020727b4(&data_0224d730, 0, sizeof(struct Pad));
}
