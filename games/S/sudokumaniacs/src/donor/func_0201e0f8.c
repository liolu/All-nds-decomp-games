/* compiler: 1.2/sp2p3  */
/* OS_InitException from projets/rayman-rr/src/auto/OS_InitException.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_0201d188();
extern u32 data_0203dff4;
extern M2C_UNK func_0201df74;
extern s32 data_0203dfec;
void func_0201e0f8(void) {
    u32 temp_r1;
    u8 *base;
    temp_r1 = *(u32 *) 0x027FFD9C;
    if ((temp_r1 >= 0x02600000U) && (temp_r1 < 0x02800000U)) {
        data_0203dff4 = temp_r1;
    } else {
        data_0203dff4 = 0;
    }
    if ((data_0203dff4 == 0) && !(func_0201d188() & 0x40000000)) {
        *(M2C_UNK *) 0x027FFD9C      = (u32) &func_0201df74;
        base                         = (u8 *) 0x027E3000;
        *(M2C_UNK **) (base + 0xFDC) = &func_0201df74;
    }
    data_0203dfec = 0;
}
