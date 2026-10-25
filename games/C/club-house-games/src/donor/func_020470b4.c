/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* resetMenuDisplays from https://github.com/ReGame-Labs/dwds_decomp src/menus/widgets/menu_displays.c (license: MIT), reused
 * by tools/donor_match.py */
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
extern s16 data_0224d6f0;
extern struct Task *data_0224d6d4;
extern void func_020470b4(void);
struct Task {
    void (*run)(void);
    struct Task *prev;
    struct Task *next;
    s32 ended;
    void (*onEnd)();
    s32 id;
    u16 priority;
};
extern s32 (*data_021366b8[])(void);
extern s32 (*data_02136694[])(void);
void func_020470b4(void) {
    data_0224d6d4 = ((void *) 0);
    data_0224d6f0 = 0;
}
