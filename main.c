#include <stdio.h>
#include "helpers/buffer.h"
#include "compiler.h"

int main()
{
    int res = compiler_file("./test.c", "./test", 0);
    if(res == COMPILER_FILE_COMPILED_OK)
    {
        printf("everything compiled fine\n");
    }
    else if(res == COMPILER_FILE_COMPILED_ERROR)
    {
        printf("Compile failed\n");
    }
    else
    {
        printf("Unknow response for compile file\n");
    }
    
    return 0; 
}