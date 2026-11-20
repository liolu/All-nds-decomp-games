/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203c264 from https://github.com/dothacktranslate/okamiden-decomp src/nonmatching/func_0203c264.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int undefined4;
extern int func_02016568();
extern int func_0203e3b0();
undefined4 func_0203dc04(undefined4 param_1)

{
    int iVar1;
    undefined4 uVar2;

    iVar1 = func_0203e3b0();
    if (iVar1 != 0) {
        uVar2 = func_02016568(param_1);
        return uVar2;
    }
    return 0;
}
