/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206afec from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0206afec.legacy.c (license: MIT),
 * reused by tools/donor_match.py */
extern void *__memcpy(void *dst, const void *src, unsigned long n);
void BufferAddInt(unsigned char **a0, int a1, int *a2) {
    __memcpy(*a0, &a1, 4);
    *a2 += 4;
    *a0 += 4;
}
