#include "m2c.h"

typedef struct {
    u16 v;
    u16 p[3];
} E;
void func_ov013_02227c48(int, int, int, int);
void func_ov013_02227b8c(int, int, int, int);
extern E data_ov013_02245692[];
extern E data_ov013_02245694[];
extern E data_ov013_02245696[];
extern E data_ov013_02245698[];
extern u8 data_ov013_0224f58c;

void func_ov013_022370d8(void) {
    int i = data_ov013_0224f58c;
    if (data_ov013_0224f58c < 4) {
        func_ov013_02227c48(data_ov013_02245692[i].v, data_ov013_02245696[i].v, data_ov013_02245694[i].v,
                            data_ov013_02245698[i].v);
        return;
    }
    func_ov013_02227b8c(0, data_ov013_02245692[i].v, data_ov013_02245696[i].v, data_ov013_02245694[i].v);
}
