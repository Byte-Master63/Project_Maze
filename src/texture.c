#include "../headers/header.h"

static const char *textureFileNames[NUM_TEXTURES] = {
	"./images/redbrick.png",
	"./images/purplestone.png",
	"./images/mossystone.png",
	"./images/graystone.png",
	"./images/colorstone.png",
	"./images/bluestone.png",
	"./images/wood.png",
	"./images/eagle.png",
};

/**
 * WallTexturesready - load textures in the respective position
 *
*/
void WallTexturesready(void)
{
	int i;

	for (i = 0; i < NUM_TEXTURES; i++)
	{
		upng_t *upng;

		upng = upng_new_from_file(textureFileNames[i]);

		if (upng != NULL)
		{
			upng_decode(upng);
			if (upng_get_error(upng) == UPNG_EOK)
			{
				wallTextures[i].upngTexture = upng;
				wallTextures[i].width = upng_get_width(upng);
				wallTextures[i].height = upng_get_height(upng);
				wallTextures[i].texture_buffer = (color_t *)upng_get_buffer(upng);
			}
		}
	}

}

/**
 * freeWallTextures - free wall textures
 *
*/

void freeWallTextures(void)
{
	int i;

	/* Loop through all the textures */
	for (i = 0; i < NUM_TEXTURES; i++)
	{
		/* Print address of the texture to be freed */
		printf("Freeing texture %d at address: %p\n", i, (void *)wallTextures[i].upngTexture);

		/* Check if the texture is not NULL */
		if (wallTextures[i].upngTexture != NULL)
		{
			/* Free the texture */
			upng_free(wallTextures[i].upngTexture);

			/* Set the pointer to NULL after freeing */
			wallTextures[i].upngTexture = NULL;
		}
	}
}


