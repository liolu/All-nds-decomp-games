/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CheckValidKey from https://github.com/Project-Holon/aletheia src/game/ov009/sb_server.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef struct {
    char *k[2];
} InvalidKeyList;
extern int CheckValidKey(char *key);
extern char *data_020e5004[2];
extern int strcmp(const char *a, const char *b);
int CheckValidKey(char *key) {
    char *InvalidKeys[2];
    unsigned int i;

    *(InvalidKeyList *) InvalidKeys = *(InvalidKeyList *) data_020e5004;
    for (i = 0; i < 2; i++) {
        if (strcmp(key, InvalidKeys[i]) == 0) {
            return 0;
        }
    }
    return 1;
}
