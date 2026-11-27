/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020521a4 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_020521a4.c (license: MIT), reused
 * by tools/donor_match.py */
extern char *data_0210f060;
extern int func_0204e494(int arg0);
extern unsigned char func_02059ca8(int idx);
extern unsigned int func_020598d0(int arg1);
extern void func_02059ec0(int idx, int arg1, int arg2);
extern void func_02059f88(int idx, int arg1, int arg2);
extern void func_0205a06c(int idx, int arg1, int arg2);
extern void DWCi_SetError(int a0, int a1);
void func_02059d4c(int arg0, int arg1, int arg2) {
    int idx = func_0204e494(arg0);

    switch (func_02059ca8(idx)) {
        case 0: {
            unsigned int r = func_020598d0(arg1);
            if (r < 2 || r > 4) {
                return;
            }
            func_02059ec0(idx, arg1, arg2);
            return;
        }
        case 1:
            func_02059ec0(idx, arg1, arg2);
            return;
        case 2:
            func_02059f88(idx, arg1, arg2);
            return;
        case 3:
            func_0205a06c(idx, arg1, arg2);
            return;
        case 4:
            *(unsigned char *) (data_0210f060 + idx * 0x30 + 0x1d) = 1;
            *(int *) (data_0210f060 + idx * 0x30 + 0x10)           = 0;
            *(int *) (data_0210f060 + idx * 0x30 + 0x18)           = 0;
            return;
        default:
            DWCi_SetError(6, (int) 0xfffe82b6);
            return;
    }
}
