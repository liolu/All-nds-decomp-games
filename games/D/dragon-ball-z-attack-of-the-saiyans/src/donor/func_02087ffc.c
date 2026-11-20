/* compiler: 2.0/sp1p5  */
/* PM_SendUtilityCommand from projets/blue-dragon-awakened-shadow/src/auto/PM_SendUtilityCommand.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02087f78(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32 *);
extern M2C_UNK (*data_0209f77c)();
extern M2C_UNK func_02087cc4;
s32 func_02087ffc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp4;
    s32 temp_r0;

    temp_r0 = func_02087f78(arg0, arg1, arg2, &func_02087cc4, &sp4);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    data_0209f77c();
    return sp4;
}
