/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02090d50 from https://github.com/banatic/acww-decomp src/main/func_02090d50.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef struct {
    unsigned int pad_00[3];
    unsigned int unk_0C;
} UnkStruct_02090d50;
extern void func_0207e930(unsigned int);
int func_0207b384(UnkStruct_02090d50 *p) {
    func_0207e930(p->unk_0C);
    return 1;
}
