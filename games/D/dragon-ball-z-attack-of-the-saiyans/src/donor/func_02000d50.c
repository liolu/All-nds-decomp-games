/* compiler: 2.0/sp1p5  */
/* func_0202c54c from projets/battle-of-giants-dinosaurs/src/auto/func_0202c54c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02000d9c(M2C_UNK);
extern M2C_UNK func_0200750c();
extern M2C_UNK data_0209fbd0;
void func_02000d50(M2C_UNK arg0) {
    if ((*(s32 *) ((s8 *) (&data_0209fbd0) + (0xC))) == 0) {
        func_0200750c();
        if ((*(M2C_UNK(**)())((s8 *) (&data_0209fbd0) + (4))) != ((void *) 0)) {
            (*(M2C_UNK(**)())((s8 *) (&data_0209fbd0) + (4)))();
            (*(M2C_UNK(**)())((s8 *) (&data_0209fbd0) + (4))) = ((void *) 0);
        }
    }
    func_02000d9c(arg0);
}
