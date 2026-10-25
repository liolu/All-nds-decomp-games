/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    s32 size;
    u8 list[4];
} Heap;

typedef struct {
    u8 pad[8];
    s32 field8;
    M2C_UNK (*callback)(void *, s32, s32, s32);
    s32 field10;
    s32 field14;
    u8 pad2[8];
} Node;

M2C_UNK func_0205c2e4();                                /* extern */
void *func_02057d84(void *, void *);     /* extern */
M2C_UNK func_0205c304(Heap *);                      /* extern */
M2C_UNK func_02057db0(void *, void *);              /* extern */
M2C_UNK func_02058798(s32, M2C_UNK);                /* extern */

void func_0205c56c(Heap *heap) {
    Node *node;
    void *p;
    void *q;
    s32 flag;

    flag = 0;
    p    = func_02057d84(&heap->list, NULL);
    if (p != NULL) {
        do {
            q = func_02057d84(p, NULL);
            while (q != NULL) {
                node = q;
                if (node->callback != NULL) {
                    node->callback((u8 *) node + 0x20, node->field8, node->field10, node->field14);
                    flag = 1;
                }
                q = func_02057d84(p, q);
            }
            func_02057db0(&heap->list, p);
            p = func_02057d84(&heap->list, NULL);
        } while (p != NULL);
    }
    func_02058798(heap->size, 3);
    if (flag != 0) {
        func_0205c2e4();
    }
    func_0205c304(heap);
}
