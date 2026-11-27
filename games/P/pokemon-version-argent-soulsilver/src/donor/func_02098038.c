/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPL_EMITTER_FreeResource from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef struct SPLNode {
    struct SPLNode *next;
    struct SPLNode *prev;
} SPLNode;
typedef struct SPLList {
    SPLNode *first;
    int count;
    SPLNode *last;
} SPLList;
typedef struct SPLList SPLList;
typedef struct SPLNode SPLNode;
typedef struct SPLList SPLList;
typedef struct SPLNode SPLNode;
extern void func_0209def8(SPLList *list, SPLNode *node);
extern SPLNode *func_0209deac(SPLList *list);
extern SPLNode *func_0209de2c(SPLList *list, SPLNode *node);
extern void func_02098038(char *p, char *q);
extern void func_0209def8(SPLList *list, SPLNode *node);
extern SPLNode *func_0209deac(SPLList *list);
extern SPLNode *func_0209de2c(SPLList *list, SPLNode *node);
extern void func_02098038(char *p, char *q);
void func_0209def8(SPLList *list, SPLNode *node);
SPLNode *func_0209deac(SPLList *list);
SPLNode *func_0209de2c(SPLList *list, SPLNode *node);
void func_02098038(char *p, char *q) {
    void *n;

    n = func_0209deac((SPLList *) (q + 8));
    while (n != 0) {
        char *head = p + 0x1c;
        char *list = q + 8;
        func_0209def8((SPLList *) head, (SPLNode *) n);
        n = func_0209deac((SPLList *) list);
    }

    n = func_0209deac((SPLList *) (q + 0x14));
    while (n != 0) {
        char *head = p + 0x1c;
        char *list = q + 0x14;
        func_0209def8((SPLList *) head, (SPLNode *) n);
        n = func_0209deac((SPLList *) list);
    }

    func_0209de2c((SPLList *) (p + 4), (SPLNode *) q);
    func_0209def8((SPLList *) (p + 0x10), (SPLNode *) q);
}
