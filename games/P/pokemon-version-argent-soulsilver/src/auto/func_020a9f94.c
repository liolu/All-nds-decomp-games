/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02076008 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02076008.legacy.c (license: MIT),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef struct {
    u8 pad[0x10];
    unsigned int lo, hi;
    u8 buf[64];
} MD5Ctx;
typedef struct {
    u8 pad[0x14];
    unsigned int hi, lo;
    u8 buf[64];
} SHA1Ctx;
extern int func_020a9f7c(char *p, int b, int c);
extern void func_020a9f58(unsigned char *p);
extern void func_020abfc0(char *a, char *b);
extern void func_020abf08(MD5Ctx *c, unsigned char *data, unsigned int len);
extern void func_020abec0(unsigned int *self);
extern void func_020ac88c(void *a0, void *a1);
extern void func_020ac7d4(SHA1Ctx *c, unsigned char *data, unsigned int len);
extern void func_020ac780(unsigned int *self);
extern void func_020d4994(void *dst, int value, unsigned int size);
extern int func_020e5bb0(unsigned char *p0, unsigned char *p1, int count);
int func_020a9f94(char *ctx, u8 *packet) {
    u8 digest[0x14];
    u8 pad[0x30];
    int len;
    int size;
    len = func_020a9f7c(ctx, (int) (packet + 5), (packet[3] << 8) + packet[4]);
    switch (*(unsigned short *) (ctx + 0x32)) {
        case 4: {
            MD5Ctx *hash;
            len -= 0x10;
            packet[3] = len >> 8;
            packet[4] = len;
            hash      = (MD5Ctx *) (ctx + 0x3fc);
            func_020abec0((unsigned int *) hash);
            func_020abf08(hash, *(u8 **) (ctx + 0x1d4), 0x10);
            func_020d4994(pad, 0x36, 0x30);
            func_020abf08(hash, pad, 0x30);
            func_020abf08(hash, (u8 *) ctx + 0x2e4, 8);
            func_020abf08(hash, packet, 1);
            func_020abf08(hash, packet + 3, len + 2);
            func_020abfc0((char *) hash, (char *) digest);
            func_020abec0((unsigned int *) hash);
            func_020abf08(hash, *(u8 **) (ctx + 0x1d4), 0x10);
            func_020d4994(pad, 0x5c, 0x30);
            func_020abf08(hash, pad, 0x30);
            func_020abf08(hash, digest, 0x10);
            func_020abfc0((char *) hash, (char *) digest);
            size = 0x10;
            break;
        }
        case 5: {
            SHA1Ctx *hash;
            len -= 0x14;
            packet[3] = len >> 8;
            packet[4] = len;
            hash      = (SHA1Ctx *) (ctx + 0x348);
            func_020ac780((unsigned int *) hash);
            func_020ac7d4(hash, *(u8 **) (ctx + 0x1d4), 0x14);
            func_020d4994(pad, 0x36, 0x28);
            func_020ac7d4(hash, pad, 0x28);
            func_020ac7d4(hash, (u8 *) ctx + 0x2e4, 8);
            func_020ac7d4(hash, packet, 1);
            func_020ac7d4(hash, packet + 3, len + 2);
            func_020ac88c(hash, digest);
            func_020ac780((unsigned int *) hash);
            func_020ac7d4(hash, *(u8 **) (ctx + 0x1d4), 0x14);
            func_020d4994(pad, 0x5c, 0x28);
            func_020ac7d4(hash, pad, 0x28);
            func_020ac7d4(hash, digest, 0x14);
            func_020ac88c(hash, digest);
            size = 0x14;
            break;
        }
    }
    if (func_020e5bb0(packet + 5 + len, digest, size) != 0) {
        ctx[0x455] = 9;
    }
    func_020a9f58((u8 *) ctx + 0x2ec);
    return len + 5;
}
