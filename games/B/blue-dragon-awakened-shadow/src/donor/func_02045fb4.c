/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203eaf8 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_0203eaf8.legacy_sp3.c (license:
 * MIT), reused by tools/donor_match.py */
extern int func_020449a8(int a);
extern int func_02044a60(void);
extern int WCM_GetPhase(void);
extern int func_020461f4(int a);
extern int func_0204663c(int a, int b);
extern int func_02046244(int a);
extern int func_02046330(int a);
extern int func_02046458(int a);
int func_02045fb4(void) {
    int a = func_020449a8(0x10);
    int b = func_02044a60();
    int c = WCM_GetPhase();
    int r;

    if (b == 2 && c == 3) {
        r = func_020461f4(a);
        goto end;
    }
    if (b == 6) {
        r = func_0204663c(a, b);
        goto end;
    }
    if (c != 3 && c != 6) {
        r = b;
        goto end;
    }
    r = func_0204663c(a, b);
    if (r == 7) {
        goto end;
    }
    if (r == 3) {
        r = func_02046244(a);
        goto end;
    }
    if (r == 4) {
        r = func_02046330(a);
        goto end;
    }
    if (r == 5) {
        r = func_02046458(a);
    }
end:
    return r;
}
