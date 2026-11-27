/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060cac from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02060cac.c (license: MIT), reused
 * by tools/donor_match.py */
extern void func_02057ca0(int x);
extern void func_02056534(unsigned int mask);
extern void func_02056500(unsigned int mask);
extern void func_02051204(void);
extern void func_020510e8(void);
typedef struct {
    char pad[0x18];
    int f18;
    int f1c;
    int f20;
    int f24;
} G;
extern G data_021608c0;
void func_02051078(void) {
    (&data_021608c0)->f18 += 0x200;
    (&data_021608c0)->f1c += 0x200;
    (&data_021608c0)->f20 -= 0x200;
    if ((&data_021608c0)->f20 == 0) {
        func_02057ca0((&data_021608c0)->f24);
        func_02056534(0x80000);
        func_02056500(0x80000);
        func_02051204();
    } else {
        func_020510e8();
    }
}
