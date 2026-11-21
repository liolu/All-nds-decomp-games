/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_021478f0 from https://github.com/RonyxDumb/mkds src/arm9/021478f0_func_021478f0.c (license: none), reused by
 * tools/donor_match.py */
extern unsigned int func_0203bf0c(unsigned int, unsigned int, unsigned int, unsigned int);
unsigned int func_0203c0cc(unsigned int r0, unsigned int r1, unsigned int r2, unsigned int r3) {
    unsigned int cmp_a, cmp_b, r4;
L_21478f4:
    r4 = r0;
L_21478f8:
    r0 = func_0203bf0c(r0, r1, r2, r3);
L_21478fc:
    r0 = 0x0u;
L_2147900:
    *(unsigned int *) ((unsigned char *) r4 + 36) = (unsigned int) r0;
L_2147904:
    *(unsigned int *) ((unsigned char *) r4 + 40) = (unsigned int) r0;
L_2147908:
    *(unsigned int *) ((unsigned char *) r4 + 44) = (unsigned int) r0;
L_2147910:
    return r0;
}
