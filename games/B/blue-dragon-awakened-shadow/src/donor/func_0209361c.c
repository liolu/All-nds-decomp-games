/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203629c from https://github.com/RonyxDumb/mkds src/arm9/0203629c_func_0203629c.c (license: none), reused by
 * tools/donor_match.py */
extern unsigned int func_020934f4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
unsigned int func_0209361c(unsigned int r0, unsigned int r1, unsigned int r2, unsigned int r3, unsigned int a4,
                           unsigned int a5) {
    unsigned int cmp_a, cmp_b, ip, lr, stack_0, stack_4;
L_20362a4:
    lr = a4;
L_20362a8:
    ip = a5;
L_20362ac:
    stack_0 = lr;
L_20362b0:
    stack_4 = ip;
L_20362b4:
    r0 = func_020934f4(r0, r1, r2, r3, stack_0, stack_4);
L_20362c0:
    return r0;
}
