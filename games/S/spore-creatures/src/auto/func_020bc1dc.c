#include "m2c.h"
typedef struct {
    u16 done;
    u16 pad[3];
} RegA;
typedef struct {
    u16 *buffer;
    u32 pad;
} RegB;
typedef struct {
    u8 pad[4];
    s32 f4;
    s32 f8;
    u8 pad2[0x18];
    u32 *f24;
} PmSt;
extern RegA data_020f3a0c[5];
extern RegB data_020f3a10[5];
extern PmSt data_020f39cc;
void func_020bc0f8(u32 result);
void func_020bc1dc(u32 tag, u32 data, s32 err) {
    u16 command;
    u16 result;
    if (err) {
        func_020bc0f8(2);
        return;
    }
    command = (u16) ((data & 0x7f00) >> 8);
    result  = data & 0xff;
    if (command >= 0x70 && command <= 0x74) {
        s32 index = command - 0x70;
        u16 *buf  = data_020f3a10[index].buffer;
        u16 value = (u8) result;
        if (buf) {
            *buf = value;
        }
        data_020f3a0c[index].done = 1;
        result                    = 0;
    } else if (command == 0x60) {
        data_020f39cc.f4 = 1;
    } else if (command == 0x62) {
        data_020f39cc.f8 = 1;
    } else if (command == 0x67) {
        if (data_020f39cc.f24) {
            *data_020f39cc.f24 = result;
        }
        result = 0;
    }
    func_020bc0f8(result);
}
