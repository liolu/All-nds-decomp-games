/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiReadMessageFromBuffer from https://github.com/Project-Holon/aletheia src/game/ov009/gpibuffer.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned long size_t;
typedef struct GPIBuffer {
    char *buffer;
    int size;
    int len;
    int pos;
} GPIBuffer;
extern int gpiReadMessageFromBuffer(void **connection, GPIBuffer *inputBuffer, char **message, int *type, int *plen);
extern int gpiValueForKey(const char *command, const char *key, char *value, int valueLen);
extern int gpiReadMessageFromBuffer(void **connection, GPIBuffer *inputBuffer, char **message, int *type, int *plen);
extern char data_020fad6c[];
extern char data_020fad74[];
extern char data_020fad78[];
extern int strncmp(const char *str1, const char *str2, size_t n);
extern char *strchr(const char *str, int c);
extern int atoi(const char *s);
int gpiReadMessageFromBuffer(void **connection, GPIBuffer *inputBuffer, char **message, int *type, int *plen) {
    char intValue[16];
    int len;
    char *str;

    *message = 0;
    if (inputBuffer->len < 5) {
        return 0;
    }
    str = (char *) strchr(inputBuffer->buffer, '\n');
    if (str != 0) {
        if (strncmp((str - 5), data_020fad6c, 5) != 0) {
            return 3;
        }
        *str = 0;
        if (!gpiValueForKey(inputBuffer->buffer, data_020fad74, intValue, 16)) {
            return 3;
        }
        *type = atoi(intValue);
        if (!gpiValueForKey(inputBuffer->buffer, data_020fad78, intValue, 16)) {
            return 3;
        }
        len = atoi(intValue);
        if (inputBuffer->len > len + 1 + (str - inputBuffer->buffer)) {
            if (str[len + 1] != 0) {
                return 3;
            }
            *message         = str + 1;
            *plen            = len;
            inputBuffer->pos = len + 1 + (str - inputBuffer->buffer) + 1;
        } else {
            *str = '\n';
        }
    }
    return 0;
}
