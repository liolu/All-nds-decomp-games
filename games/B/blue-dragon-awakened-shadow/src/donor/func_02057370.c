/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0204b62c from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0204b62c.c (license: MIT), reused by
 * tools/donor_match.py */
extern int func_0204e34c(void);
extern void *func_02059234(void);
extern void func_02059244(int);
extern int func_02057a0c(int);
extern int func_020579a8(int, int);
extern int func_020572f0(int, int);
extern int func_02056db4(int);
extern void func_02056bc0(int);
extern long long OS_GetTick(void);
extern unsigned long long _ll_udiv(unsigned long long, unsigned long long);
struct Slots {
    char pad[0xf4];
    int slots[1];
};
int func_02057370(int a0, int a1, int a2) {
    if (func_0204e34c() != 6) {
        return 1;
    }
    switch (a1) {
        case 13:
            if ((*(int *) ((char *) func_02059234() + 0x1a0)) != 8) {
                func_02059244(8);
                func_02056db4(a2);
            }
            if (func_020572f0(a0, 14) == 0) {
                return 0;
            }
            break;
        case 14:
            if ((*(int *) ((char *) func_02059234() + 0x1a0)) == 14) {
                unsigned long long now = OS_GetTick();
                if ((_ll_udiv((now - (*(unsigned long long *) ((char *) func_02059234() + 0x1e8))) << 6, 0x82ea) >> 1) > 300) {
                    unsigned long long elapsed =
                        (_ll_udiv((now - (*(unsigned long long *) ((char *) func_02059234() + 0x1e8))) << 6, 0x82ea) >> 1) -
                        300;
                    if (elapsed > (*(unsigned short *) ((char *) func_02059234() + 0x1b2))) {
                        (*(unsigned short *) ((char *) func_02059234() + 0x1b2)) = elapsed;
                    }
                }
                {
                    int bit = func_020579a8(a0, 0);
                    if (bit != 255) {
                        (*(int *) ((char *) func_02059234() + 0x1d8)) |= 1 << bit;
                    }
                }
                {
                    int mask = func_02057a0c(1);
                    if (mask == (*(int *) ((char *) func_02059234() + 0x1d8))) {
                        int i;
                        for (i = 1; i <= (*(unsigned char *) ((char *) func_02059234() + 0xd)); i++) {
                            if (func_020572f0(((struct Slots *) func_02059234())->slots[i], 15) == 0) {
                                return 0;
                            }
                        }
                        func_02059244(15);
                    }
                }
            } else {
                if (func_020572f0(a0, 15) == 0) {
                    return 0;
                }
            }
            break;
        case 15:
            if ((*(int *) ((char *) func_02059234() + 0x1a0)) == 8) {
                func_02056bc0(2);
            }
            break;
    }
    return 1;
}
