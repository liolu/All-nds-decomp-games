/* compiler: 1.2/sp2p3  */
/* func_02073f54 from projets/children-of-mana/src/auto/func_02073f54.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern void *func_02040e14();
extern M2C_UNK func_02040e9c();
extern M2C_UNK data_0206a244;
void func_020417a8(void *arg0) {
    void *var_r1;

    var_r1 = func_02040e14(&data_0206a244, 0);
    if (var_r1 != ((void *) 0)) {
    loop_2:
        if ((u32) (*(u8 *) ((s8 *) (arg0) + (0x3D))) >= (u32) (*(u8 *) ((s8 *) (var_r1) + (0x3D)))) {
            var_r1 = func_02040e14(&data_0206a244);
            if (var_r1 != ((void *) 0)) {
                goto loop_2;
            }
        }
    }
    func_02040e9c(&data_0206a244, var_r1, arg0);
}
