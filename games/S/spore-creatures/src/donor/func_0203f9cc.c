/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020727ec from https://github.com/banatic/acww-decomp src/main/func_020727ec.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern void func_0203fc1c(char *p);
extern void func_02001f60(char *p);
extern void func_0208acbc(char *p);
char *func_0203f9cc(char *p) {
    func_0203fc1c(p);
    func_02001f60(p + 4);
    func_0208acbc(p);
    return p;
}
