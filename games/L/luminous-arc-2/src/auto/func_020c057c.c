/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c057c from https://github.com/LagoLunatic/ooe libs/GameSpy/qr2/qr2.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned long size_t;
extern void func_02018e4c(void *dest, void *src, size_t count);
extern size_t func_0201b47c(const char *str);
typedef int gsi_bool;
typedef struct qr2_buffer_s *qr2_buffer_t;
extern gsi_bool func_020c057c(qr2_buffer_t outbuf, const char *value);
extern gsi_bool func_020c057c(qr2_buffer_t outbuf, const char *value);
struct qr2_buffer_s {
    char buffer[1400];
    int len;
};
gsi_bool func_020c057c(qr2_buffer_t outbuf, const char *value) {
    {};
    {};
    {
        int copylen;
        copylen = (int) func_0201b47c(value) + 1;
        if (copylen > (1400 - (outbuf)->len)) {
            copylen = (1400 - (outbuf)->len);
        }
        if (copylen <= 0) {
            return ((gsi_bool) 0);
        }
        func_02018e4c(outbuf->buffer + outbuf->len, value, (unsigned int) copylen);
        outbuf->len += copylen;
        outbuf->buffer[outbuf->len - 1] = 0;
        return ((gsi_bool) 1);
    }
}
