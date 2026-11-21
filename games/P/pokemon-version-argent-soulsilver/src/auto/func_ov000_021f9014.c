typedef struct Hdr {
    int magic;
    int ver;
    unsigned char a;
    unsigned char len;
    unsigned short c;
    int d;
    int e;
} Hdr;
extern void func_020d4a50(void *, void *, unsigned int);
extern int func_020e9848(void *, void *, int);
extern int func_ov000_021ee588(void);
extern unsigned char *func_ov000_021f957c(void);
extern int func_ov000_021f4760(int, int, int, int, void *, int);
extern unsigned char data_ov000_02217b74[];

void func_ov000_021f9014(unsigned char *src, unsigned int size) {
    Hdr h;
    unsigned char buf[0x80];
    unsigned int off = 0;
    if (func_ov000_021ee588() != 5) {
        if (func_ov000_021ee588() != 6) {
            return;
        }
        if (func_ov000_021f957c()[0x15] != 2 && func_ov000_021f957c()[0x15] != 3) {
            return;
        }
    }
    if (size < 0x14) {
        return;
    }
    do {
        func_020d4a50(src, &h, 0x14);
        if (func_020e9848(&h, data_ov000_02217b74, 4) != 0) {
            return;
        }
        if (h.ver != 3) {
            return;
        }
        func_020d4a50(src + 0x14, buf, h.len);
        if (func_ov000_021f4760(h.a, h.e, h.d, h.c, buf, h.len >> 2) == 0) {
            return;
        }
        off += h.len + 0x14;
    } while (off + 0x14 <= size);
}
