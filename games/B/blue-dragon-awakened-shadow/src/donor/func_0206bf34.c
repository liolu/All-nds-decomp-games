/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PlayerOpFloat from https://github.com/Project-Holon/aletheia src/game/ov009/gstats.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef struct StatsGame {
    int pad0[3];
    void *serverData;
    int pad10[3];
    void *playerIndexes;
    void *teamIndexes;
} StatsGame;
extern int func_020068c0(char *dst, const char *fmt, ...);
extern int func_0206bd44(StatsGame *game, int pnum);
extern double func_0206be0c(StatsGame *game, char *name, double *(*func)(void *, char *, void *), double value, int index);
extern double func_0206bf34(StatsGame *game, char *name, double *(*func)(void *, char *, void *), double value, int index);
extern char data_020fbc18[];
double func_0206bf34(StatsGame *game, char *name, double *(*func)(void *, char *, void *), double value, int index) {
    char fullname[64];

    func_020068c0(fullname, data_020fbc18, name, func_0206bd44(game, index));
    return func_0206be0c(game, fullname, func, value, index);
}
double func_0206be0c(StatsGame *game, char *name, double *(*func)(void *, char *, void *), double value, int index);
int func_0206bd44(StatsGame *game, int pnum);
