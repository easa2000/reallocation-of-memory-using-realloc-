//reallocation of memory using realloc()

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
    char *str;
    str = (char*)malloc(10);
    if(str == NULL)
    {
        printf("\n Memory could not be allocated");
        exit(1);
    }
    strcpy(str,"Hi");
    printf("\n STR = %s",str);

    // reallocation
    str = (char*)realloc(str,20);
    if(str == NULL)
    {
        printf("\n Memory could not be allocated");
        exit(1);
    }
    printf("\n STR size modified. \n");
    printf("\n STR = %s\n",str);
    strcpy(str,"Hi There");
    printf("\n STR = %s",str);

    // freeing memory
    // free(str);
    str = (char*)realloc(str,0);


}
