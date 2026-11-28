/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020220b0 from https://github.com/RonyxDumb/mkds src/arm9/020220b0_func_020220b0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int uint32_t;
typedef uint32_t undefined4;
typedef unsigned int undefined4;
extern void func_02007658(undefined4 *param_1);
extern void func_02007680(undefined4 *param_1);
void func_02007680(undefined4 *param_1)

{
    func_02007658(param_1 + 7);
    *param_1   = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0;
    param_1[4] = 0x1000;
    param_1[5] = 0;
    param_1[6] = 0;
    return;
}
