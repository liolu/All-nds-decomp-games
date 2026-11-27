/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiReadKeyAndValue from https://github.com/Project-Holon/aletheia src/game/ov009/gpiutility.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
extern int gpiReadKeyAndValue(void **connection, const char *buffer, int *index, char *key, char *value);
extern void gpiSetError(void **connection, int result, char *errorString);
extern int gpiCallErrorCallback(void **connection, int result, int fatal);
extern char data_020fbb20[];
int gpiReadKeyAndValue(void **connection, const char *buffer, int *index, char *key, char *value) {
    int c;
    int i;
    char *start;

    buffer += *index;
    start = (char *) buffer;

    if (*buffer++ != '\\') {
        gpiSetError(connection, 1, data_020fbb20);
        gpiCallErrorCallback(connection, 3, 1);
        return 3;
    }

    for (i = 0; (c = *buffer++) != '\\'; i++) {
        if (c == 0) {
            gpiSetError(connection, 1, data_020fbb20);
            gpiCallErrorCallback(connection, 3, 1);
            return 3;
        }
        if (i == 0x1ff) {
            gpiSetError(connection, 1, data_020fbb20);
            gpiCallErrorCallback(connection, 3, 1);
            return 3;
        }
        *key++ = (char) c;
    }
    *key = 0;

    for (i = 0; ((c = *buffer++) != '\\') && (c != 0); i++) {
        if (i == 0x1ff) {
            gpiSetError(connection, 1, data_020fbb20);
            gpiCallErrorCallback(connection, 3, 1);
            return 3;
        }
        *value++ = (char) c;
    }
    *value = 0;

    *index += (int) (buffer - start - 1);
    return 0;
}
void gpiSetError(void **connection, int result, char *errorString);
