/* compiler: 2.0/sp1p5  */
/* func_0203b3c4 from projets/battle-of-giants-dinosaurs/src/auto/func_0203b3c4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
extern s32 func_0202720c(void *, u32, void *);
typedef struct Tab {
    u32 count;
    u32 pad[2];
    u8 *data;
} Tab;
s32 func_02026bb0(void *a, Tab *t) {
    struct {
        u32 out;
        u32 val;
    } s;
    u8 *p = t->data;
    u32 i = 0;
    while (i < t->count) {
        s.val = p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
        if (func_0202720c(a, s.val, &s) != 0) {
            return 1;
        }
        i++;
        p += 4;
    }
    return 0;
}
