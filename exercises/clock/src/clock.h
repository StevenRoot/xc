#ifndef _CLOCK_H
#define _CLOCK_H

#define MAX_STR_LEN 5

void clock(char time_text[MAX_STR_LEN], int hour, int minute);
void clock_add(char time_text[MAX_STR_LEN], int minute_offset);

#endif
