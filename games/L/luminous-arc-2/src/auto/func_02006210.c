/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_InstallExceptionVector from https://github.com/Yokimitsuro/khdays-decomp
 * libs/nitro/os/calls/OSi_InstallExceptionVector.c (license: CC0-1.0), reused by tools/donor_match.py */
extern void func_02006280(void);
extern char data_02147b88[];
void func_02006210(void) {
    unsigned int v = *(volatile unsigned int *) 0x027FFD9Cu;
    if (v >= 0x02600000u && v < 0x02800000u) {
        *(unsigned int *) data_02147b88 = v;
    } else {
        *(unsigned int *) data_02147b88 = 0;
    }
    if (*(unsigned int *) data_02147b88 == 0) {
        *(volatile void **) 0x027FFD9Cu = (void *) func_02006280;
        {
            volatile char *base                = (volatile char *) 0x027E3000u;
            *(volatile void **) (base + 0xFDC) = (void *) func_02006280;
        }
    }
    *(unsigned int *) (data_02147b88 + 8) = 0;
}
