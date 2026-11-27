/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_ov090_0221c434 from https://github.com/SHOEGAZEssb/Rosy-Rupeeland-Decomp
 * src/overlays/ov090/overlay090_title_chain_accessors.c (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
void *func_0208f93c(void *self, s32 index) {
    return (*(void ***) ((u8 *) (self) + (4)))[index];
}
