/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* qr_add_packet_header from https://github.com/Project-Holon/aletheia src/game/ov009/qr2.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef struct qr2_buffer_s {
    char buffer[1400];
    int len;
} qr2_buffer_s;
typedef struct key4_t {
    char b[4];
} key4_t;
extern void func_020721ac(qr2_buffer_s *buf, char ptype, char *reqkey);
void func_020721ac(qr2_buffer_s *buf, char ptype, char *reqkey) {
    buf->buffer[0]              = ptype;
    *(key4_t *) &buf->buffer[1] = *(key4_t *) reqkey;
    buf->len                    = 5;
}
