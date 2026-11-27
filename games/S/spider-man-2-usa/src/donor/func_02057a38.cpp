/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_02059cb4 from https://github.com/tangosdev/sm64ds-decomp src/IRQ3.cpp (license: MIT), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern "C" {
extern unsigned int func_02056534(u32 mask);
extern volatile u16 data_021615b8;
extern u32 data_021615bc[2];
void func_02057a38(void) {
    if (data_021615b8 != 0) {
        return;
    }
    u32 *data     = data_021615bc;
    data_021615b8 = 1;
    data[0]       = 0;
    data[1]       = 0;
    func_02056534(4);
}
}
