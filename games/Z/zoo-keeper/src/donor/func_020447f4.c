/* compiler: 1.2/sp2p3  */
/* func_0209e90c from projets/ultimate-spider-man/src/auto/func_0209e90c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02049324(M2C_UNK *);
extern M2C_UNK func_02049398(M2C_UNK *);
extern M2C_UNK func_020421cc(void *);
extern M2C_UNK func_02044a20(void *);
extern M2C_UNK data_0206ab80;
void func_020447f4(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != (*(s32 *) ((s8 *) (arg2) + (0x128)))) {
        return;
    }
    func_02049398(&data_0206ab80);
    func_02044a20(arg2);
    (*(s32 *) ((s8 *) (arg2) + (0x128))) = 0;
    (*(s32 *) ((s8 *) (arg2) + (0x12C))) = 0;
    (*(s8 *) ((s8 *) (arg2) + (0x120)))  = 0;
    if ((s32) (*(s32 *) ((s8 *) (arg2) + (0x11C))) > 0) {
        func_020421cc(arg2);
        (*(s32 *) ((s8 *) (arg2) + (0x11C))) = 0;
    }
    func_02049324(&data_0206ab80);
}
