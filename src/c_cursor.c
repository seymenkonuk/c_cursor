#include "c_cursor.h"

// CURSOR'u GİZLER
// @return void
void	cur_hide()
{
	printf("\033[?25l");
	fflush(0);
}

// CURSOR'u GÖSTERİR
// @return void
void	cur_show()
{
	printf("\033[?25h");
	fflush(0);
}

// CURSOR'un KONUMUNU DEĞİŞTİRİR
// @param x: cursor'un x eksenindeki yeni konumu (sol üst köşe (0,0) noktasıdır)
// @param x: cursor'un y eksenindeki yeni konumu (sol üst köşe (0,0) noktasıdır)
// @return void
void	cur_set_pos(uint64_t x, uint64_t y)
{
	printf("%c[%d;%df", 0x1B, y, x);
}

// YENİ YAZILACAK YAZILARIN RENGİNİ VARSAYILAN RENK YAPAR
// @return void
void cur_reset_color()
{
	printf("\033[0m");
}

// YENİ YAZILACAK YAZILARIN RENGİNİ DEĞİŞTİRİR
// @param color: 0-255 arasında renk değeri
// @return void
void	cur_change_color(uint8_t color)
{
	printf("\033[38;5;%dm", color);
}

// YENİ YAZILACAK YAZILARIN RENGİNİ DEĞİŞTİRİR
// @param r: RGB renk kodunun r (kırmızı) değeri
// @param g: RGB renk kodunun g (yeşil) değeri
// @param b: RGB renk kodunun b (mavi) değeri
// @return success: RGB değerini 0-255 arasında renk koduna dönüştürür
static uint8_t	rgb_to_256color(uint8_t r, uint8_t g, uint8_t b)
{
	uint8_t	r_index;
	uint8_t	g_index;
	uint8_t	b_index;
	
	r_index = (r * 6) / 256;
	g_index = (g * 6) / 256;
	b_index = (b * 6) / 256;

	if (r == g && g == b)
		return 232 + ((r - 8) / 10);

	return 16 + (r_index * 36) + (g_index * 6) + b_index;
}

// YENİ YAZILACAK YAZILARIN RENGİNİ RGB FORMATINDA DEĞİŞTİRİR
// @param r: RGB renk kodunun r (kırmızı) değeri
// @param g: RGB renk kodunun g (yeşil) değeri
// @param b: RGB renk kodunun b (mavi) değeri
// @return void
void	cur_change_rgb(uint8_t r, uint8_t g, uint8_t b)
{
	cur_change_color(rgb_to_256color(r, g, b));
}
