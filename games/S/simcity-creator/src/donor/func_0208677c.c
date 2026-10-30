/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* TextureResource_GetPaletteKey from https://github.com/pret/pokeplatinum src/resource_collection.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
extern const u16(*ctrdgi_fl_maxtime);
typedef u32 NNSGfdTexKey;
typedef u32 NNSGfdPlttKey;
typedef struct Resource {
    int id;
    void *data;
} Resource;
typedef struct TextureResource {
    Resource *resource;
    NNSGfdTexKey texKey;
    NNSGfdTexKey tex4x4Key;
    NNSGfdPlttKey paletteKey;
    void *textureData;
    u16 texDataDiscarded;
    u16 mode;
} TextureResource;
extern NNSGfdPlttKey func_0208677c(const TextureResource *texResource);
NNSGfdPlttKey func_0208677c(const TextureResource *texResource) {
    func_0208672c(texResource);
    return texResource->paletteKey;
}
