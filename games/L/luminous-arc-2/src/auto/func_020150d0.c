#include "m2c.h"
typedef struct {
    u8 pad[0x24];
    u8 state;
} MbSt;
extern MbSt data_0214ade0;
s32 func_0201515c(void);
void func_020151fc(void);
s32 func_02015250(u32 a, u32 b, u32 c);
void func_020153b4(void);
s32 func_020153e4(u32 a, u32 b, u32 c);
void func_020150d0(u32 a, u32 b, u32 c) {
    for (;;) {
        switch (data_0214ade0.state) {
            case 0:
            case 1:
                if (func_0201515c() == 0) {
                    return;
                }
                break;
            case 2:
                func_020151fc();
                break;
            case 3:
                func_02015250(a, b, c);
                return;
            case 4:
                func_020153b4();
                break;
            case 6:
                break;
            case 5:
                func_020153e4(a, b, c);
                return;
        }
    }
}
