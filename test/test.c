#include <stdio.h>

#include "../src/c_cursor.h"

int main()
{
	cur_hide();
	cur_reset_color();
	printf("imlec gizlendi!\n");

	cur_change_rgb(255, 0, 0);
	printf("rgb(255, 0, 0)\n");

	cur_change_rgb(65, 146, 162);
	printf("rgb(65, 146, 162)\n");

	cur_set_pos(10, 10);
	printf("Yer degisti!\n");

	cur_reset_color();

	return (0);
}
