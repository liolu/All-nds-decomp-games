/* compiler: 1.2/sp2p3  */
/* func_0206df38 from projets/madagascar/src/auto/func_0206df38.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern u16 *func_02051bc0(M2C_UNK, u16);
extern M2C_UNK func_02054360(u16 *, u16);
extern s32 data_0206ef94;
void func_020542b8(M2C_UNK arg0) {
    s32 temp_r5;
    u16 *temp_r0;
    u16 temp_r1;
    u16 var_r6;
    u16 var_r6_2;

    var_r6 = 0;
    do {
        temp_r5 = (var_r6 * 0x5CC) + data_0206ef94;
        if ((*(u8 *) ((s8 *) (temp_r5) + (0x1D4A))) != 0) {
            (*(s16 *) ((s8 *) (temp_r5) + (0x1D42))) = 0;
        }
        var_r6 += 1;
    } while ((u32) var_r6 < 0x10U);
    var_r6_2 = 1;
    do {
        temp_r0 = func_02051bc0(arg0, var_r6_2);
        if (temp_r0 != ((void *) 0)) {
            temp_r1 = *temp_r0;
            if ((temp_r1 != 0xFFFF) && (temp_r1 != 0)) {
                func_02054360(temp_r0, var_r6_2);
            }
        }
        var_r6_2 += 1;
    } while ((u32) var_r6_2 <= 0xFU);
}
