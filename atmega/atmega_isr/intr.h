
#ifndef __INTR_H__
#define __INTR_H__

#include <avr/io.h>



uint32_t enable_bmap;



#define MAX_INTR 28

typedef struct intr_table_tag {
    void (*isr_t)(void *);
    void *arg_t;
} intr_table_t;

#endif //__INTR_H__

