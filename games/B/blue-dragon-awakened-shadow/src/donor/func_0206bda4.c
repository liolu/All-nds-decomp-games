/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ServerOpInt from https://github.com/Project-Holon/aletheia src/game/ov009/gstats.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef struct StatsGame {
    int pad0[3];
    void *serverData;
    int pad10[3];
    void *playerIndexes;
    void *teamIndexes;
} StatsGame;
typedef struct StatsConn {
    int pad0[2];
    int inLen;
    StatsGame *game;
    int pad10;
    void *requests;
    int inSize;
    int pad1C;
    int bufIndex;
    int pad24;
    char *inBuff;
    int state;
} StatsConn;
extern void *func_0206ade4(struct bucketset_s *set, char *name, int type, void *initialvalue);
extern int func_0206bda4(StatsGame *game, char *name, int *(*func)(void *, char *, void *), int value, int index);
extern struct StatsConn serverreqs;
int func_0206bda4(StatsGame *game, char *name, int *(*func)(void *, char *, void *), int value, int index) {
    int *ret;

    if (game == 0) {
        game = serverreqs.game;
    }
    if (game == 0) {
        ret = &value;
    } else {
        ret = func(game->serverData, name, &value);
        if (ret == 0) {
            ret = func_0206ade4(game->serverData, name, 0, &value);
        }
    }
    return *ret;
}
