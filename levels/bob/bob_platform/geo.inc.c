#include "src/game/envfx_snow.h"

const GeoLayout bob_platform_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, bob_platform_bob_platform_mesh_layer_1),
		GEO_DISPLAY_LIST(1, bob_platform_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
