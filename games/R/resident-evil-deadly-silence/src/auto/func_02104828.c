/* compiler: 1.2/sp2p3 */
typedef unsigned int u32;
typedef int s32;
extern s32 data_02158adc;
extern u32 func_021041b8(void);
u32 func_02104828(s32 id) {
    switch (id) {
        case 0:
            return 0x215BDC0;
        case 2:
            if (data_02158adc == 0 || (func_021041b8() & 3) == 1) {
                return 0;
            }
            return 0x02400000;
        case 3:
            return 0x1FFDD40;
        case 4:
            return 0x27E02A0;
        case 5:
            return 0x027FF000;
        case 6:
            return 0x037F8000;
        default:
            return 0;
    }
}
