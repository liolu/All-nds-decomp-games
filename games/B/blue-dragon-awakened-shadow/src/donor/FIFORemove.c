/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FIFORemove from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_queryengine.c (license: CC0-1.0), reused
 * by tools/donor_match.py */
typedef unsigned char gsi_u8;
typedef unsigned int gsi_u32;
typedef unsigned int gsi_time;
typedef gsi_u32 goa_uint32;
typedef struct _SBServer *SBServer;
typedef enum {
    SBFalse,
    SBTrue
} SBBool;
typedef struct HashImplementation *HashTable;
struct _SBServer {
    goa_uint32 publicip;
    unsigned short publicport;
    goa_uint32 privateip;
    unsigned short privateport;
    goa_uint32 icmpip;
    unsigned char state;
    unsigned char flags;
    HashTable keyvals;
    gsi_time updatetime;
    gsi_u32 querychallenge;
    struct _SBServer *next;
    gsi_u8 splitResponseBitmap;
};
typedef struct _SBServerFIFO {
    SBServer first;
    SBServer last;
    int count;
} SBServerFIFO;
SBBool FIFORemove(SBServerFIFO *fifo, SBServer server) {
    SBServer hold, prev;
    prev = 0;
    hold = fifo->first;
    while (hold != 0) {
        if (hold == server) {
            if (prev != 0) {
                prev->next = hold->next;
            }
            if (fifo->first == hold) {
                fifo->first = hold->next;
            }
            if (fifo->last == hold) {
                fifo->last = prev;
            }
            fifo->count--;

            return SBTrue;
        }
        prev = hold;
        hold = hold->next;
    }

    ;
    return SBFalse;
}
