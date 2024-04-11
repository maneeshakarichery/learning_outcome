
#include "intr.h"

intr_table_t intr_table[MAX_INTR];

uint8_t
intr_install(uint8_t vectornum, void (*isr_function_t)(void *), void *arg_t)
{
	intr_table[vectornum].isr_t = isr_function_t;
        intr_table[vectornum].arg_t = arg_t;
        return 1;  
}

uint32_t 
intr_enable(enable_bmap)
{
 while(enable_bmap >( MAX_INTR-1) )
 {
   if(enable_bmap == 01)
   {
   
   
   
   }
   else if(enable_bmap == 02)
   {
   
   
   
   }
 }

}


uint32_t
intr_disable()
{
 while(enable_bmap >( MAX_INTR-1) )
 {
   if(enable_bmap == 01)
   {



   }
   else if(enable_bmap == 02)
   {



   }
 }

}









int
main(void)
{  
    while (1)
    {
       
    }

    return 0;
}
