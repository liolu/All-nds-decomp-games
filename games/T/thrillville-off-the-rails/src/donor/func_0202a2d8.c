/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020657fc from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_020657fc.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_02024624(void);
extern void func_02024638(unsigned int x);
extern int *func_0202a5d4(void);
extern void func_0202a5c4(int v);
struct Node {
    int *key;
    char pad[0x24];
    struct Node *next;
};
struct Node *func_0202a2d8(int *key) {
    int saved         = (0, func_02024624());
    struct Node *head = (struct Node *) func_0202a5d4();
    struct Node *cur;
    struct Node *prev;
    if (head == 0) {
        func_02024638(saved);
        return 0;
    }
    if (head->key == key) {
        func_0202a5c4((int) head->next);
        func_02024638(saved);
        return head;
    }
    prev = head;
    cur  = prev->next;
    while (cur != 0) {
        if (cur->key == key) {
            prev->next = cur->next;
            func_02024638(saved);
            return cur;
        }
        prev = cur;
        cur  = cur->next;
    }

    func_02024638(saved);
    return 0;
}
