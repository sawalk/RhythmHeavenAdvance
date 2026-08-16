#include "global.h"
#include "graphics.h"
#include "src/scenes/title.h"
#include "graphics/title/title_graphics.h"


  /* TITLE SCREEN - SCENE DATA */


// [D_089dcf68] Title Logo Characters
#ifdef PARADISE
struct TitleLogoCharData title_logo_char_data[TOTAL_TITLE_LOGO_BUBBLES] = {
    /* RI */ {
        /* Anim. */ anim_title_logo_ri,
        /* X, Y  */ 63, 89,
        /* Angle */ 84
    },
    /* ZU */ {
        /* Anim. */ anim_title_logo_zu,
        /* X, Y  */ 100, 66,
        /* Angle */ 192
    },
    /* MU */ {
        /* Anim. */ anim_title_logo_mu,
        /* X, Y  */ 141, 91,
        /* Angle */ 44
    },
    /* TEN */ {
        /* Anim. */ anim_title_logo_ten,
        /* X, Y  */ 182, 78,
        /* Angle */ -20
    },
    /* ADVANCE */ {
        /* Anim. */ anim_title_logo_advance,
        /* X, Y  */ 128, 91,
        /* Angle */ 37
    }
};
};
#else
struct TitleLogoCharData title_logo_char_data[TOTAL_TITLE_LOGO_BUBBLES] = {
    /* RI */ {
        /* Anim. */ anim_title_logo_ri,
        /* X, Y  */ 60, 88,
        /* Angle */ 84
    },
    /* DUM */ {
        /* Anim. */ anim_title_logo_mu,
        /* X, Y  */ 140, 71,
        /* Angle */ 44
    },
    /* SE */ {
        /* Anim. */ anim_title_logo_zu,
        /* X, Y  */ 100, 93,
        /* Angle */ 192
    },
    /* SANG */ {
        /* Anim. */ anim_title_logo_ten,
        /* X, Y  */ 180, 78,
        /* Angle */ -20
    },
    /* ADVANCE */ {
        /* Anim. */ anim_title_logo_advance,
        /* X, Y  */ 138, 91,
        /* Angle */ 37
    }
};
#endif

// [D_089dcfa4] Graphics Table
struct GraphicsTable title_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &title_bg_tiles,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &title_bg_map,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &title_obj,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ title_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x200
    },
    /* OBJ Palette */ {
        /* Src.  */ title_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x200
    },
    END_OF_GRAPHICS_TABLE
};


// [D_089dcfec] Buffered Textures List
struct CompressedData *title_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};
