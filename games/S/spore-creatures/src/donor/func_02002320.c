/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02036b14 from https://github.com/banatic/acww-decomp src/main/func_02036b14.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern void func_02090bf0(int, int);
struct UnkStruct_02036b14 {
    char pad_00[8];
    unsigned short unk_08;
};
void func_02002320(struct UnkStruct_02036b14 *p) {
    if (p->unk_08 != 0xffff) {
        func_02090bf0(p->unk_08, 0xffff);
        p->unk_08 = 0xffff;
    }
}
