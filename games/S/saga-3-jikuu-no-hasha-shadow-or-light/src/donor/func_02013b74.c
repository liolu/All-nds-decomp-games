/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_SetProtectionRegion from https://github.com/kh-recoded-decomp/kh-recoded-decomp
 * eu/libs/nitro/os/calls/OSi_SetProtectionRegion.c (license: MIT), reused by tools/donor_match.py */
typedef void (*TableFunc)(void *arg);
extern TableFunc data_0210e974[];
void func_02013b74(int index, void *arg) {
    data_0210e974[index](arg);
}
