/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02074c6c from projets/club-house-games/src/donor/func_02074c6c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef struct {
    unsigned char *pos;
    int eof;
} CharCursor;
int func_02003f48(CharCursor *s, int c, int cmd) {
    switch (cmd) {
        case 0: {
            unsigned char *p = s->pos;
            int ch           = *p;
            if (ch == 0) {
                s->eof = 1;
                return -1;
            }
            s->pos = p + 1;
            return ch;
        }
        case 1:
            if (s->eof == 0) {
                s->pos = s->pos - 1;
            } else {
                s->eof = 0;
            }
            return c;
        case 2:
            return s->eof;
        default:
            return 0;
    }
}
