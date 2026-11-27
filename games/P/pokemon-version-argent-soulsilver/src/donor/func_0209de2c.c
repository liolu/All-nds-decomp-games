/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPLList_Erase from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT = tooling
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
extern SPLNode *func_0209de2c(SPLList *list, SPLNode *node);
extern SPLNode *func_0209de2c(SPLList *list, SPLNode *node);
SPLNode *func_0209de2c(SPLList *list, SPLNode *node) {
    SPLNode *next;

    next = node->next;
    if (next == 0) {
        if (list->first == node) {
            list->first = 0;
            list->last  = 0;
        } else {
            node->prev->next = 0;
            list->last       = list->last->prev;
        }
    } else {
        if (list->first == node) {
            list->first       = next;
            list->first->prev = 0;
        } else {
            next->prev       = node->prev;
            node->prev->next = node->next;
        }
    }
    list->count--;
    return node;
}
