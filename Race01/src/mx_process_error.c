#include "header.h"

void mx_process_error(int error, char *value){
    
    switch(error){
        case INVALID_OPERAND:
            mx_printerr(MX_INVALID_OPERAND_STR);
            break;
        case INVALID_OPERATION:
            mx_printerr(MX_INVALID_OPERATION_STR);
            break;
        case INVALID_RESULT:
            mx_printerr(MX_INVALID_RESULT_STR);
            break;
    }

    mx_printerr(value);
    mx_printchar('\n');
}
