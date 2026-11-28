/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MBi_ReceiveRequestDataPiece from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_block.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern void func_02021390(const void *src, void *dest, u32 size);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct {
    u8 type;
    u8 pad1[1];
    union {
        struct {
            u16 req;
            u8 reserved[((16) - 2)];
        } data;
        struct {
            u8 piece;

            u8 data[((16) - 2)];
            u8 pad2[1];
        } req_data;
    };
} MBCommChildBlockHeader;
typedef struct {
    u32 data_buf[15][((29) + 1) / sizeof(u32) + 1];
    u32 data_bmp[15];
} MbRequestPieceBuf;
extern u8 *func_020205fc(const MBCommChildBlockHeader *hdr, u16 child);
extern BOOL func_0202059c(u16 child);
extern struct {
    int size;
    int num;
    int bufSize;
} data_020ec2d8;
extern MbRequestPieceBuf *data_020ec2d4;
u8 *func_020205fc(const MBCommChildBlockHeader *hdr, u16 child) {
    u8 piece;
    u8 *ptr;

    if (data_020ec2d4 == 0) {
        return 0;
    }

    piece = hdr->req_data.piece;

    if (piece > data_020ec2d8.num) {
        return 0;
    }

    ptr = ((u8 *) data_020ec2d4->data_buf[child - 1]) + (piece * data_020ec2d8.size);

    func_02021390(&hdr->req_data.data[0], ptr, (u32) data_020ec2d8.size);
    data_020ec2d4->data_bmp[child - 1] |= (1 << piece);

    ((void) 0);

    if (func_0202059c(child)) {
        return (u8 *) data_020ec2d4->data_buf[child - 1];
    }

    return 0;
}
BOOL func_0202059c(u16 child);
