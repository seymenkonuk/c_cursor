#ifndef C_CURSOR_H
#define C_CURSOR_H

/* INCLUDES */
#include <stdio.h>
#include <stdint.h>

/* ENUMS */
typedef enum {
	Black = 30,
	Red,
	Green,
	Yellow,
	Blue,
	Magenta,
	Cyan,
	White,
	Reset = 0
} color;

/* FUNCTIONS */
void	cur_hide();
void	cur_show();
void	cur_set_pos(uint64_t x, uint64_t y);
void	cur_reset_color();
void	cur_change_color(uint8_t color);
void	cur_change_rgb(uint8_t r, uint8_t g, uint8_t b);

#endif
