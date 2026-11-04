/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FIELD_G3D_MAPPER_FreeGroundAnimeSlot from https://github.com/Project-Holon/aletheia src/game/ov021/field_g3d_mapper.c
 * (license: none (MIT = tooling only)), reused by tools/donor_match.py */
typedef struct FieldGroundAnime FieldGroundAnime;
typedef struct GroundAnmEntry GroundAnmEntry;
extern void func_0201f4f0(GroundAnmEntry *entry);
extern void func_02046ea4(struct FieldGroundAnime **slot);
void func_02046ea4(struct FieldGroundAnime **slot) {
    if (*slot != 0) {
        func_0201f4f0((struct GroundAnmEntry *) (*slot));
        *slot = 0;
    }
}
