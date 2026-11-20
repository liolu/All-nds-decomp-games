/* compiler: 2.0/sp1p5  */
/* func_020315b8 from projets/blue-dragon-plus/src/auto/func_020315b8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0208cd84(M2C_UNK);
extern M2C_UNK func_0208ee7c;
extern M2C_UNK func_0208eef0;
extern M2C_UNK func_0208ef00;
extern M2C_UNK func_0208ef38;
extern M2C_UNK func_0208ef48;
extern M2C_UNK func_0208ef70;
extern M2C_UNK func_0208ef74;
extern M2C_UNK func_0208ef90;
void func_0208edfc(void *arg0, M2C_UNK arg1) {
    if (func_0208cd84(arg1) == 0) {
        (*(M2C_UNK **) ((s8 *) (arg0) + (0x164))) = &func_0208ee7c;
        (*(M2C_UNK **) ((s8 *) (arg0) + (0x168))) = &func_0208eef0;
        (*(M2C_UNK **) ((s8 *) (arg0) + (0x16C))) = &func_0208ef00;
        (*(M2C_UNK **) ((s8 *) (arg0) + (0x170))) = &func_0208ef38;
        return;
    }
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x164))) = &func_0208ef48;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x168))) = &func_0208ef70;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x16C))) = &func_0208ef74;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x170))) = &func_0208ef90;
}
