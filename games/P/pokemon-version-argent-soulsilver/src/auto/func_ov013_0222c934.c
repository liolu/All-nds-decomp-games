#include "m2c.h"

typedef struct {
    u16 v;
    u16 p[3];
} E;
void func_ov013_02227c48(int, int, int, int);
void func_ov013_0223abd8(int);
extern E data_ov013_0224535e[];
extern E data_ov013_02245360[];
extern E data_ov013_02245362[];
extern E data_ov013_02245364[];
extern u8 data_ov013_0224f51c;

void func_ov013_0222c934(int a) {
    int i;
    if (a == 1) {
        return;
    }
    if (a == 3) {
        return;
    }
    data_ov013_0224f51c ^= 1;
    func_ov013_0223abd8(8);
    i = data_ov013_0224f51c;
    func_ov013_02227c48(data_ov013_0224535e[i].v, data_ov013_02245362[i].v, data_ov013_02245360[i].v,
                        data_ov013_02245364[i].v);
}
