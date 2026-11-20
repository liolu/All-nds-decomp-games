/* compiler: 1.2/sp2p3  */
/* func_0205c828 from projets/children-of-mana/src/auto/func_0205c828.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201c244(M2C_UNK);
extern M2C_UNK func_0201c2fc(M2C_UNK, M2C_UNK *);
extern M2C_UNK func_0201e184(M2C_UNK);
extern u16 data_0203e07c;
extern s32 data_0203e080;
extern M2C_UNK data_0203e084;
extern M2C_UNK func_0201e1b0;
void func_0201e238(void) {
    if (data_0203e07c != 0) {
        return;
    }
    data_0203e07c = 1;
    func_0201e184(0);
    (*(s32 *) ((s8 *) (&data_0203e084) + (0))) = 0;
    (*(s32 *) ((s8 *) (&data_0203e084) + (4))) = 0;
    *(s16 *) 0x04000102                        = 0;
    *(s16 *) 0x04000100                        = 0;
    *(s16 *) 0x04000102                        = 0xC1;
    func_0201c2fc(8, &func_0201e1b0);
    func_0201c244(8);
    data_0203e080 = 0;
}
