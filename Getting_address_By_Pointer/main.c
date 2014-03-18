//
//  main.c
//  Getting_address_By_Pointer
//
//  Created by ammar falmban on 11/18/13.
//  Copyright (c) 2013 SDKaizen.com. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    // first value
    int i = 17;
    int *adressOfI = &i;
    printf("i stores it,s valur at %p \n",adressOfI);
    printf("this function start at %p \n",main);
    printf("the int stored at addressOfI is %d\n",*adressOfI);
    
    // secand value
    *adressOfI = 89;
    printf("Now is %d \n",i);
    printf("alloc:%p\n",&i);
    return 0;
}

