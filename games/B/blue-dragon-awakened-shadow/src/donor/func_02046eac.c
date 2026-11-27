/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203f4f4 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_0203f4f4.c (license: MIT), reused
 * by tools/donor_match.py */
extern void func_0200d938(void *a0);
extern void func_0200d978(void *a0, void *a1, int a2);
extern void func_0200da40(void *a0, void *a1);
extern void MI_CpuCopy8(void *a0, void *a1, int a2);
void func_02046eac(void *a0, void *a1) {
    unsigned char bufB[0x14];
    unsigned char bufA[0x58];

    func_0200d938(bufA);
    func_0200d978(bufA, a0, 0x18);
    func_0200da40(bufB, bufA);
    MI_CpuCopy8(bufB + 3, a1, 0xd);
}
