/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206347c from projets/children-of-mana/src/auto/func_0206347c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern void func_0201ec24(s32 id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
extern void func_0201f5b0(s32 no);
void func_0201ed60(u32 arg0, u32 arg1, u32 alarmMask, u32 arg3) {
    s32 i;
    u32 mask = alarmMask;

    for (i = 0; i < 8 && mask != 0; i++, mask >>= 1) {
        if (mask & 1) {
            func_0201f5b0(i);
        }
    }
    func_0201ec24(13, arg0, arg1, alarmMask, arg3);
}
extern void func_0201ec24(s32 id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
