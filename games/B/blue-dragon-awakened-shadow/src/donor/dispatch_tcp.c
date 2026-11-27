/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* dispatch_tcp from https://github.com/ntrtwl/NitroWiFi libraries/cps/src/network.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
enum Protocol {
    PROTOCOL_ICMP = 1,
    PROTOCOL_TCP  = 6,
    PROTOCOL_UDP  = 17,
};
enum TCPHeaderOffset {
    TCP_OFFSET_SOURCE_PORT    = 0,
    TCP_OFFSET_DEST_PORT      = 2,
    TCP_OFFSET_SEQ_NO         = 4,
    TCP_OFFSET_ACK_NO         = 8,
    TCP_OFFSET_DATA_OFFSET    = 12,
    TCP_OFFSET_FLAG           = 13,
    TCP_OFFSET_WINDOW         = 14,
    TCP_OFFSET_CHECKSUM       = 16,
    TCP_OFFSET_URGENT_POINTER = 18,
    TCP_OFFSET_OPTIONS        = 20,
};
enum TCPFlag {
    TCP_FLAG_FIN = 1 << 0,
    TCP_FLAG_SYN = 1 << 1,
    TCP_FLAG_RST = 1 << 2,
    TCP_FLAG_PSH = 1 << 3,
    TCP_FLAG_ACK = 1 << 4,
    TCP_FLAG_URG = 1 << 5,
    TCP_FLAG_ECE = 1 << 6,
    TCP_FLAG_CWR = 1 << 7,
};
BOOL check_tcpudpsum(u8 *tcpudp_hdr, u32 len, u8 *ip_hdr, u16 protocol);
void tcp_send_rst(u8 *iphdr, u8 *tcphdr, u32 len, u16 urg);
void dt_syn(u8 *iphdr, u8 *tcphdr, u32 len);
void dt_synack(u8 *iphdr, u8 *tcphdr, u32 len);
void dt_ack(u8 *iphdr, u8 *tcphdr, u32 len);
void dt_fin(u8 *iphdr, u8 *tcphdr, u32 len);
void dt_rst(u8 *iphdr, u8 *tcphdr);
void dispatch_tcp(u8 *iphdr, u8 *tcphdr, u32 len) {
    if (check_tcpudpsum(tcphdr, len, iphdr, PROTOCOL_TCP)) {
        return;
    }

    len -= (tcphdr[TCP_OFFSET_DATA_OFFSET] & 0xF0) / 4;
    switch (tcphdr[TCP_OFFSET_FLAG] & (TCP_FLAG_FIN | TCP_FLAG_SYN | TCP_FLAG_RST | TCP_FLAG_ACK)) {
        case TCP_FLAG_SYN:
            if (!(tcphdr[TCP_OFFSET_FLAG] & (TCP_FLAG_PSH | TCP_FLAG_URG))) {
                dt_syn(iphdr, tcphdr, len);
            }
            break;
        case (TCP_FLAG_SYN | TCP_FLAG_ACK):
            if (!(tcphdr[TCP_OFFSET_FLAG] & (TCP_FLAG_PSH | TCP_FLAG_URG))) {
                dt_synack(iphdr, tcphdr, len);
            }
            break;
        case (TCP_FLAG_FIN | TCP_FLAG_ACK):
        case TCP_FLAG_ACK:
            dt_ack(iphdr, tcphdr, len);
            break;
        case TCP_FLAG_FIN:
            dt_fin(iphdr, tcphdr, len);
            break;
        default:
            if (tcphdr[TCP_OFFSET_FLAG] & TCP_FLAG_RST) {
                dt_rst(iphdr, tcphdr);
            } else {
                tcp_send_rst(iphdr, tcphdr, len, 0);
            }
            break;
    }
}
