/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* qr_process_query from https://github.com/LagoLunatic/ooe libs/GameSpy/qr2/qr2.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef struct SOInAddr {
    int addr;
} SOInAddr;
struct SOSockAddrIn {
    u8 _pad;
    u8 family;
    u16 port;
    SOInAddr addr;
};
typedef struct SOSockAddr {
    int len;
} SOSockAddr;
typedef unsigned char gsi_u8;
typedef unsigned int gsi_u32;
typedef unsigned int gsi_time;
typedef int gsi_bool;
typedef int SOCKET;
typedef struct SOSockAddr SOCKADDR;
extern int sendto(SOCKET sock, const char *buf, int len, int flags, const SOCKADDR *addr, int tolen);
typedef enum {
    e_qrnoerror,
    e_qrwsockerror,
    e_qrbinderror,
    e_qrdnserror,
    e_qrconnerror,
    e_qrnochallengeerror,
    qr2_error_t_count
} qr2_error_t;
typedef enum {
    key_server,
    key_player,
    key_team,
    key_type_count
} qr2_key_type;
typedef struct qr2_implementation_s *qr2_t;
typedef struct qr2_keybuffer_s *qr2_keybuffer_t;
typedef struct qr2_buffer_s *qr2_buffer_t;
typedef void (*qr2_serverkeycallback_t)(int keyid, qr2_buffer_t outbuf, void *userdata);
typedef void (*qr2_playerteamkeycallback_t)(int keyid, int index, qr2_buffer_t outbuf, void *userdata);
typedef void (*qr2_keylistcallback_t)(qr2_key_type keytype, qr2_keybuffer_t keybuffer, void *userdata);
typedef int (*qr2_countcallback_t)(qr2_key_type keytype, void *userdata);
typedef void (*qr2_adderrorcallback_t)(qr2_error_t error, char *errmsg, void *userdata);
typedef void (*qr2_natnegcallback_t)(int cookie, void *userdata);
typedef void (*qr2_clientmessagecallback_t)(char *data, int len, void *userdata);
typedef void (*qr2_publicaddresscallback_t)(unsigned int ip, unsigned short port, void *userdata);
typedef void (*qr2_clientconnectedcallback_t)(SOCKET gamesocket, struct SOSockAddrIn *remoteaddr, void *userdata);
typedef void (*qr2_denyqr2responsetoipcallback_t)(void *userdata, unsigned int sender_ip, int *result);
typedef void (*cdkey_process_t)(char *buf, int len, struct SOSockAddr *fromaddr);
struct qr2_ipverify_info_s {
    struct SOSockAddrIn addr;
    gsi_u32 challenge;
    gsi_time createtime;
};
struct qr2_implementation_s {
    SOCKET hbsock;
    char gamename[64];
    char secret_key[64];
    char instance_key[4];
    qr2_serverkeycallback_t server_key_callback;
    qr2_playerteamkeycallback_t player_key_callback;
    qr2_playerteamkeycallback_t team_key_callback;
    qr2_keylistcallback_t key_list_callback;
    qr2_countcallback_t playerteam_count_callback;
    qr2_adderrorcallback_t adderror_callback;
    qr2_natnegcallback_t nn_callback;
    qr2_clientmessagecallback_t cm_callback;
    qr2_publicaddresscallback_t pa_callback;
    qr2_clientconnectedcallback_t cc_callback;

    qr2_denyqr2responsetoipcallback_t denyresp2_ip_callback;

    gsi_time lastheartbeat;
    gsi_time lastka;
    int userstatechangerequested;
    int listed_state;
    int ispublic;
    int qport;
    int read_socket;
    int nat_negotiate;
    struct SOSockAddrIn hbaddr;
    cdkey_process_t cdkeyprocess;
    int client_message_keys[10];
    int cur_message_key;
    unsigned int publicip;
    unsigned short publicport;
    void *udata;

    gsi_u8 backendoptions;
    struct qr2_ipverify_info_s ipverify[200];
};
typedef unsigned char uchar;
struct qr2_keybuffer_s {
    uchar keys[254];
    int numkeys;
};
struct qr2_buffer_s {
    char buffer[1400];
    int len;
};
void qr_build_query_reply(qr2_t qrec, qr2_buffer_t buf, int serverkeycount, uchar *serverkeys, int playerkeycount,
                          uchar *playerkeys, int teamkeycount, uchar *teamkeys);
struct QRSplitQueryProgress {
    qr2_key_type mCurKeyType;
    int mCurPacketNum;
    int mCurKeyIndex;
    int mCurSubCount;
    int mCurSubIndex;
    struct qr2_keybuffer_s mKeyBuffer;
};
gsi_bool qr_build_split_query_reply(qr2_t qrec, qr2_buffer_t buf, struct QRSplitQueryProgress *progress);
void qr_process_query(qr2_t qrec, qr2_buffer_t buf, uchar *qdata, int len, struct SOSockAddr *sender) {
    uchar serverkeycount;
    uchar playerkeycount;
    uchar teamkeycount;
    uchar exflags = 0;

    uchar *serverkeys = 0;
    uchar *playerkeys = 0;
    uchar *teamkeys   = 0;
    if (len < 3) {

        ;
        return;
    }
    serverkeycount = qdata[0];
    qdata++;
    len--;
    if (serverkeycount != 0 && serverkeycount != 0xFF) {
        serverkeys = qdata;
        qdata += serverkeycount;
        len -= serverkeycount;
    }
    if (len < 2) {

        ;
        return;
    }
    playerkeycount = qdata[0];
    qdata++;
    len--;
    if (playerkeycount != 0 && playerkeycount != 0xFF) {
        playerkeys = qdata;
        qdata += playerkeycount;
        len -= playerkeycount;
    }
    if (len < 1) {

        ;
        return;
    }
    teamkeycount = qdata[0];
    qdata++;
    len--;
    if (teamkeycount != 0 && teamkeycount != 0xFF) {
        teamkeys = qdata;
        qdata += teamkeycount;
        len -= teamkeycount;
    }
    if (len < 0) {

        ;
        return;
    }

    if (len > 0) {
        exflags = qdata[0];
        len--;
    }

    if ((exflags & (1 << 0)) == (1 << 0)) {
        struct QRSplitQueryProgress progress;
        progress.mCurPacketNum      = 0;
        progress.mCurKeyType        = key_server;
        progress.mCurKeyIndex       = 0;
        progress.mCurSubCount       = 0;
        progress.mCurSubIndex       = 0;
        progress.mKeyBuffer.numkeys = 0;

        ;

        while (((gsi_bool) 1) == qr_build_split_query_reply(qrec, buf, &progress)) {
            sendto(qrec->hbsock, buf->buffer, buf->len, 0, sender, sizeof(struct SOSockAddrIn));
            buf->len = 5;
            if (progress.mCurPacketNum > 7) {
                return;
            }
        }

        ;
    } else {

        ;
        qr_build_query_reply(qrec, buf, serverkeycount, serverkeys, playerkeycount, playerkeys, teamkeycount, teamkeys);
        sendto(qrec->hbsock, buf->buffer, buf->len, 0, sender, sizeof(struct SOSockAddrIn));
    }

    {
        void *y = &sender;
        y       = 0;
    };
}
