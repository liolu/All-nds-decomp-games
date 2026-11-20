/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3X_InitMtxStack from projets/blue-dragon-awakened-shadow/src/donor/G3X_InitMtxStack.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern void func_02081f90(void);
extern s32 func_020821f0(s32 *level);
extern s32 func_02082220(s32 *level);
void func_02081f90(void) {
    s32 pvLevel, pjLevel;

    (*(vu32 *) 0x04000600) |= 0x8000;
    while (func_020821f0(&pvLevel)) {
    }
    while (func_02082220(&pjLevel)) {
    }
    (*(vu32 *) 0x04000440) = 3;
    (*(vu32 *) 0x04000454) = 0;
    (*(vu32 *) 0x04000440) = 0;
    if (pjLevel != 0) {
        (*(vu32 *) 0x04000448) = pjLevel;
    }
    (*(vu32 *) 0x04000454) = 0;
    (*(vu32 *) 0x04000440) = 2;
    (*(vu32 *) 0x04000448) = pvLevel;
    (*(vu32 *) 0x04000454) = 0;
}
extern s32 func_020821f0(s32 *level);
extern s32 func_02082220(s32 *level);
