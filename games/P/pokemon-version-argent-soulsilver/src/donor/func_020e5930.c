/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* rewind from https://github.com/ctrl-cheeb-del/pokeheartgold lib/MSL_C/src/msl_filepos_rewind.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
extern int func_020e5804(void *, long, int);
extern void func_020e5930(void *);
void func_020e5930(void *f) {
    ((u8 *) f)[0xD] = 0;
    func_020e5804(f, 0, 0);
    ((u8 *) f)[0xD] = 0;
}
