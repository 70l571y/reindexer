#pragma once
#include <stdlib.h>

void allocdebug_show();
void allocdebug_init();
size_t get_alloc_size();
size_t get_alloc_size_total();
size_t get_alloc_cnt();
size_t get_alloc_cnt_total();