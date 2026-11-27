/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205cc80 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205cc80.c (license: MIT), reused
 * by tools/donor_match.py */
extern unsigned int _ZN3IRQ7DisableEv(void);
extern void _ZN3IRQ7RestoreEj(unsigned int saved);
extern void *func_02053088(void *a, int b);
extern void *func_02053150(void *a, void *b);
typedef struct Node {
    void *field_0;
    struct Node *next;
    struct Node *field_8;
} Node;
extern Node *data_021611c0;
typedef struct {
    void *field_0;
    short field_4;
    short field_6;
    int field_8;
} Tail;
extern Tail data_021611c4;
int func_02052acc(Node *thiz, void *a, void *b) {
    unsigned int saved;
    int ret = 0;

    saved = _ZN3IRQ7DisableEv();

    if (func_02053088(a, (int) b) == 0) {
        if (data_021611c0 == 0) {
            data_021611c0         = thiz;
            data_021611c4.field_0 = thiz;
            data_021611c4.field_8 = 0;
            data_021611c4.field_6 = 0;
            data_021611c4.field_4 = 0;
        } else {
            Node *cur = data_021611c0;
            while (cur->next != 0) {
                cur = cur->next;
            }
            cur->next     = thiz;
            thiz->field_8 = cur;
        }
        thiz->field_0 = func_02053150(a, b);
        ret           = 1;
    }

    _ZN3IRQ7RestoreEj(saved);
    return ret;
}
