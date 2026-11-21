#include "m2c.h"
typedef struct {
    u8 pad[0xc];
    s32 f;
    u8 pad2[1];
    u8 fl;
} O;
typedef struct {
    void *first;
    u8 pad[60];
} E;
void func_ov013_022412d0(void *);
void func_ov013_02241c00(void *);
void func_ov013_022402a8(void *, void *);
extern E *data_ov013_0224f664;
void func_ov013_0224261c(s32 i, u8 *o) {
    if (o[0x11] != 0) {
        func_ov013_022412d0(o + 0xc);
    }
    func_ov013_02241c00(o);
    func_ov013_022402a8(data_ov013_0224f664[i].first, o);
}
