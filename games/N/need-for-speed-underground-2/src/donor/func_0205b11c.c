/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203f004 from https://github.com/tylzars/bakutrainer libs/nds/src/os/os_timer.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
extern void func_0205b11c(int timerNum, u32 count, u32 control);
void func_0205b11c(int timerNum, u32 count, u32 control) {
    vu16 *timer = (vu16 *) (0x4000000 + timerNum * 4);
    timer[0x80] = ~count;
    timer[0x81] = control | 0xc0;
}
