/* compiler: 1.2/sp2p3  */
/* func_0200e40c from projets/children-of-mana/src/auto/func_0200e40c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205b930();
extern M2C_UNK func_0205bd64();
void func_0205bca8(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    if (arg0 == ((void *) 0)) {
        return;
    }
    if (arg3 != 0) {
        func_0205bd64(arg0, (*(s32 *) ((s8 *) (arg0) + (-4))), arg1);
    }
    func_0205b930(arg0 - arg2);
}
