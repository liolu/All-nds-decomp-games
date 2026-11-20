/* compiler: 1.2/sp2p3  */
/* func_02009198 from projets/code-lyoko/src/auto/func_02009198.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201c764();
extern M2C_UNK func_0201c79c();
extern M2C_UNK func_0201c8d0();
extern M2C_UNK func_0201ca1c(void *);
extern M2C_UNK func_0201ce94(void *);
extern M2C_UNK func_0201cf74(s32, void *);
extern M2C_UNK func_0201d46c(void *);
extern M2C_UNK func_0201e640();
extern void **data_0203dd60;
void func_0201caf0(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *data_0203dd60;
    func_0201c79c();
    func_0201d46c(temp_r4);
    temp_r0 = (*(s32 *) ((s8 *) (temp_r4) + (0x78)));
    if (temp_r0 != 0) {
        func_0201cf74(temp_r0, temp_r4);
    }
    func_0201ce94(temp_r4);
    (*(s32 *) ((s8 *) (temp_r4) + (0x64))) = 2;
    func_0201ca1c(temp_r4 + 0x9C);
    func_0201c764();
    func_0201c8d0();
    func_0201e640();
}
