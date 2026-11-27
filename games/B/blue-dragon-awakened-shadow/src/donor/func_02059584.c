/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020529e8 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_020529e8.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
extern void *func_02059c74(int idx);
extern int func_020594d4(void *a0, int a1);
extern void func_020598a0(char *a0, int a1, int a2);
extern void func_02059cc4(void *self, int a, int b, int c);
extern int func_0205a0a8(void *self);
extern char *data_0210f060;
typedef struct {
    int data;
    int pad4[2];
    int done;
    int pad10;
    int size;
    int pad18;
    unsigned char active;
} Slot;
int func_02059584(int kind, int id, int data, int size) {
    Slot *slot;
    char header[8];
    int count;
    int total;
    void (*cb)(int, int);
    slot = func_02059c74(id);
    if (func_020594d4((void *) id, kind) == 0) {
        return 0;
    }
    slot->active = 1;
    slot->data   = data;
    slot->done   = 0;
    slot->size   = size;
    func_020598a0(header, kind, size);
    func_02059cc4((void *) id, (int) header, 8, 1);
    count = *(unsigned short *) (data_0210f060 + 0x610);
    if (size <= count) {
        count = size;
    }
    if (count > func_0205a0a8((void *) id)) {
        return 1;
    }
    func_02059cc4((void *) id, data, count, 1);
    slot->done += count;
    total = slot->size;
    if (slot->done == total) {
        slot->active = 0;
        slot->data   = 0;
        slot->done   = 0;
        slot->size   = 0;
        cb           = *(void (**)(int, int))(data_0210f060 + 0x600);
        if (cb != 0 && kind == 1) {
            cb(total, id);
        }
    }
    return 1;
}
