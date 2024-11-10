#include <stdio.h>
#include<stdlib.h>
#include"SLL.h"//our file
void main()
{
    status_t status;
    sll_t* p_list=NULL;
    p_list = create_list();
    show_list(p_list,"after list creation");
   status= insert_start(p_list,10);
   status= insert_end(p_list,20);
   show_list(p_list," list creation");
}