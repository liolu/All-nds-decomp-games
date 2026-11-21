#include "m2c.h"
extern void func_ov000_022148c4(void *);
extern void *func_ov000_021fe5d4(s32, s32, s32);
extern s32 func_ov000_02213ff4(u8 *, s32);
extern s32 func_ov000_02213f08(void *, u8 *);
extern void func_ov000_021fe774(void *, void *);
typedef struct {
    s32 a;
    s32 b;
} Pair;
typedef struct {
    u8 pad[8];
    void *list;
} Obj;
s32 func_ov000_022154b0(Obj *obj, u8 *data, s32 size) {
    Pair pr;
    s32 i;
    s32 n;
    u8 count;
    size--;
    count = *data++;
    if (obj->list != 0) {
        func_ov000_022148c4(obj);
    }
    obj->list = func_ov000_021fe5d4(8, count, 0);
    if (obj->list == 0) {
        return 5;
    }
    for (i = 0; i < count; i++) {
        if (size < 2) {
            return 4;
        }
        n = func_ov000_02213ff4(data + 1, size - 1);
        if (n == -1) {
            return 4;
        }
        pr.b = *data;
        pr.a = func_ov000_02213f08(obj, data + 1);
        func_ov000_021fe774(obj->list, &pr);
        n++;
        data += n;
        size -= n;
    }
    return 0;
}
