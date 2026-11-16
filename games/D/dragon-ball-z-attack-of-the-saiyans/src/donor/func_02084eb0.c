/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_InitException from projets/blue-dragon-awakened-shadow/src/donor/OS_InitException.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02084f20(void);
extern char data_020d8884[];
void func_02084eb0(void) {
    unsigned int v = *(volatile unsigned int *) 0x027FFD9Cu;
    if (v >= 0x02600000u && v < 0x02800000u) {
        *(unsigned int *) data_020d8884 = v;
    } else {
        *(unsigned int *) data_020d8884 = 0;
    }
    if (*(unsigned int *) data_020d8884 == 0) {
        *(volatile void **) 0x027FFD9Cu = (void *) func_02084f20;
        {
            volatile char *base                = (volatile char *) 0x027E3000u;
            *(volatile void **) (base + 0xFDC) = (void *) func_02084f20;
        }
    }
    *(unsigned int *) (data_020d8884 + 8) = 0;
}
