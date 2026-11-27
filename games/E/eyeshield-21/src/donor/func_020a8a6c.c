/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NFTR_LoadImpl from https://github.com/ai-tdd-labs/mkds-decomp ai/scratch/agent_02022d88.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef struct CommonHeader CommonHeader;
typedef struct StructFON StructFON;
typedef struct G2d_Font {
    void *fnif_data;
    int (*next_char_fn_ptr)(StructFON *);
    u16 ver_is_old;
    u16 char_width_entry_size;
} G2d_Font;
extern int func_020aa7b8(CommonHeader *common_h, G2d_Font *font);
extern int (*data_020d9320[])(StructFON *);
void func_020a8a6c(G2d_Font *out_font, CommonHeader *nftr_ptr) {
    int ver                         = func_020aa7b8(nftr_ptr, out_font) - 1;
    unsigned char encoding          = ((unsigned char *) out_font->fnif_data)[7];
    out_font->ver_is_old            = ver;
    out_font->char_width_entry_size = out_font->ver_is_old != 0 ? 2 : 3;
    out_font->next_char_fn_ptr      = data_020d9320[encoding];
}
