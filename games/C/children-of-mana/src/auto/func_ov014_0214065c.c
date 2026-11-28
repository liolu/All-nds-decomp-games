/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* mfci_init_obj from https://github.com/Yotona/twewy libs/cri/src/mfci.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef struct {
    signed char used;
    signed char stat;
    int sct_len;
    int fsize;
    int fsize_sct;
    int sct_pos;
    int num_tr;
    int req_sct;
    char fname[0x14];
    int ofs;
    int req_size;
} MFCI_OBJ;
extern int func_ov014_02140704(const char *fname);
int func_ov014_02140704(const char *fname);
void func_ov014_0214065c(MFCI_OBJ *obj) {
    obj->sct_len   = 0x800;
    obj->fsize     = func_ov014_02140704(obj->fname);
    obj->fsize_sct = (obj->fsize + (obj->sct_len - 1)) / obj->sct_len;
    obj->sct_pos   = 0;
    obj->req_sct   = 0;
    obj->num_tr    = 0;
    obj->stat      = 0;
    obj->used      = 1;
}
