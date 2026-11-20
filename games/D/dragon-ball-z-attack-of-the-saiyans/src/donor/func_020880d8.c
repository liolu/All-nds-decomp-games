/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PM_SetBackLightAsync from projets/blue-dragon-awakened-shadow/src/donor/PM_SetBackLightAsync.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned int undefined4;
extern int func_02087f78();
undefined4 func_020880d8(int param_1, int param_2, undefined4 param_3, undefined4 param_4)

{
    undefined4 uVar1;
    int iVar2;

    iVar2 = 0;
    if (param_1 == 0) {
        if (param_2 == 1) {
            iVar2 = 6;
        }
        if (param_2 == 0) {
            iVar2 = 7;
        }
    } else if (param_1 == 1) {
        if (param_2 == 1) {
            iVar2 = 4;
        }
        if (param_2 == 0) {
            iVar2 = 5;
        }
    } else if (param_1 == 2) {
        if (param_2 == 1) {
            iVar2 = 8;
        }
        if (param_2 == 0) {
            iVar2 = 9;
        }
    }
    if (iVar2 == 0) {
        return ((unsigned int) 0x0000ffff);
    }
    uVar1 = func_02087f78(iVar2, 0, 0, param_3, param_4);
    return uVar1;
}
