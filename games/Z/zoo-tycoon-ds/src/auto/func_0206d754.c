/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205cc80 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205cc80.c (license: MIT), reused
 * by tools/donor_match.py */
extern unsigned int _ZN3IRQ7DisableEv(void);
extern void _ZN3IRQ7RestoreEj(unsigned int saved);
extern void *func_0206dd10(void *a, int b);
extern void *func_0206ddd8(void *a, void *b);
typedef struct Node {
    void *field_0;
    struct Node *next;
    struct Node *field_8;
} Node;
extern Node *data_02186588;
typedef struct {
    void *field_0;
    short field_4;
    short field_6;
    int field_8;
} Tail;
extern Tail data_0218658c;
int func_0206d754(Node *thiz, void *a, void *b) {
    unsigned int saved;
    int ret = 0;

    saved = _ZN3IRQ7DisableEv();

    if (func_0206dd10(a, (int) b) == 0) {
        if (data_02186588 == 0) {
            data_02186588         = thiz;
            data_0218658c.field_0 = thiz;
            data_0218658c.field_8 = 0;
            data_0218658c.field_6 = 0;
            data_0218658c.field_4 = 0;
        } else {
            Node *cur = data_02186588;
            while (cur->next != 0) {
                cur = cur->next;
            }
            cur->next     = thiz;
            thiz->field_8 = cur;
        }
        thiz->field_0 = func_0206ddd8(a, b);
        ret           = 1;
    }

    _ZN3IRQ7RestoreEj(saved);
    return ret;
}
