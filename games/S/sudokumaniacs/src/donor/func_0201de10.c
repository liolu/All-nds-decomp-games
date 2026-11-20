/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205c370 from projets/children-of-mana/src/auto/func_0205c370.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef int s32;
typedef struct UnkHeapCell UnkHeapCell;
struct UnkHeapCell {
    UnkHeapCell *prev;
    UnkHeapCell *next;
    s32 size;
};
UnkHeapCell *func_0201de10(UnkHeapCell *list, UnkHeapCell *cell) {
    UnkHeapCell *prev = 0;
    UnkHeapCell *next;

    for (next = list; next != 0; prev = next, next = next->next) {
        if (cell <= next) {
            break;
        }
    }

    cell->next = next;
    cell->prev = prev;

    if (next != 0) {
        next->prev = cell;
        if ((char *) cell + cell->size == (char *) next) {
            cell->size += next->size;
            next       = next->next;
            cell->next = next;
            if (next != 0) {
                next->prev = cell;
            }
        }
    }

    if (prev != 0) {
        prev->next = cell;
        if ((char *) prev + prev->size == (char *) cell) {
            prev->size += cell->size;
            prev->next = next;
            if (next != 0) {
                next->prev = prev;
            }
        }
        return list;
    } else {
        return cell;
    }
}
