/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPLList_PopFront from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
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
extern SPLNode *func_0209deac(SPLList *list);
extern SPLNode *func_0209deac(SPLList *list);
SPLNode *func_0209deac(SPLList *list) {
    SPLNode *ret;
    SPLNode *head;

    ret  = 0;
    head = list->first;
    if (head != 0) {
        ret         = head;
        list->first = head->next;
        if (list->first != 0) {
            head->next->prev = 0;
        } else {
            list->first = 0;
            list->last  = 0;
        }
        list->count--;
    }
    return ret;
}
