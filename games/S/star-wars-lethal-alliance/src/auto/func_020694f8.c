/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207b094 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_bank.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
extern void func_02066320(void *ptr, u32 size);
extern void func_020686c8(void);
extern void func_020686b4(void);
typedef struct UnkSndWaveArc UnkSndWaveArc;
typedef struct UnkSndWaveArcLink {
    UnkSndWaveArc *waveArc;
    struct UnkSndWaveArcLink *next;
} UnkSndWaveArcLink;
struct UnkSndWaveArc {
    u8 unk_00[8];
    u32 fileSize;
    u8 unk_0c[4];
    u8 blockHeader[8];
    UnkSndWaveArcLink *topLink;
    u32 reserved[7];
    u32 waveCount;
    u32 waveOffset[0];
};
typedef struct UnkSndBankData {
    u8 fileHeader[0x10];
    u8 blockHeader[8];
    UnkSndWaveArcLink waveArcLink[4];
    u32 instCount;
    u32 instOffset[1];
} UnkSndBankData;
void func_020694f8(UnkSndBankData *bank, s32 index, UnkSndWaveArc *waveArc) {
    func_020686c8();

    if (bank->waveArcLink[index].waveArc != 0) {
        if (waveArc == bank->waveArcLink[index].waveArc) {
            func_020686b4();
            return;
        }
        if (&bank->waveArcLink[index] == bank->waveArcLink[index].waveArc->topLink) {
            bank->waveArcLink[index].waveArc->topLink = bank->waveArcLink[index].next;
            func_02066320(bank->waveArcLink[index].waveArc, 0x3c);
        } else {
            UnkSndWaveArcLink *link;
            for (link = bank->waveArcLink[index].waveArc->topLink; link != 0; link = link->next) {
                if (&bank->waveArcLink[index] == link->next) {
                    break;
                }
            }
            link->next = bank->waveArcLink[index].next;
            func_02066320(link, sizeof(UnkSndWaveArcLink));
        }
    }

    {
        UnkSndWaveArcLink *next          = waveArc->topLink;
        waveArc->topLink                 = &bank->waveArcLink[index];
        bank->waveArcLink[index].next    = next;
        bank->waveArcLink[index].waveArc = waveArc;
    }

    func_020686b4();
    func_02066320(bank, 0x3c);
    func_02066320(waveArc, 0x3c);
}
