/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPLList_PushFront from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT = tooling
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
extern void func_0209def8(SPLList *list, SPLNode *node);
extern void func_0209def8(SPLList *list, SPLNode *node);
void func_0209def8(SPLList *list, SPLNode *node) {
    SPLNode *head;

    head = list->first;
    if (head == 0) {
        list->first = node;
        list->last  = node;
        node->next  = 0;
        node->prev  = node->next;
    } else {
        node->next        = head;
        node->prev        = 0;
        list->first->prev = node;
        list->first       = node;
    }
    list->count++;
}
