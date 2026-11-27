/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0204be40 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0204be40.c (license: MIT), reused by
 * tools/donor_match.py */
typedef struct {
    char _pad_00[0x15];
    unsigned char f15;
    char _pad_16[0x17 - 0x16];
    unsigned char f17;
    char _pad_18[0x20 - 0x18];
    int f20;
    char _pad_24[0x1a8 - 0x24];
    unsigned char f1a8;
    char _pad_1a9[0x208 - 0x1a9];
    int f208;
} Singleton;
extern Singleton *func_02059234(void);
extern void func_02059244(int x);
extern int func_02057fa8(void);
extern int func_02053ac4(int x);
extern int func_0205596c(int a, int b);
extern int func_02055940(void);
extern void func_02056bc0(int x);
int func_02056cf4(void) {
    int result;

    func_02059234()->f17  = 0;
    func_02059234()->f20  = 0;
    func_02059234()->f1a8 = 0;

    if (func_02059234()->f208 != 0) {
        if (func_02059234()->f15 == 0) {
            func_02059244(3);
            result = func_02053ac4(0);
            if (func_02057fa8() != 0) {
                return result;
            }
        } else if (func_02059234()->f15 == 1) {
            func_02059244(4);
            result = func_0205596c(func_02059234()->f208, 0);
            if (func_02055940() != 0) {
                return result;
            }
        }
    } else {
        func_02056bc0(1);
    }
    return 0;
}
