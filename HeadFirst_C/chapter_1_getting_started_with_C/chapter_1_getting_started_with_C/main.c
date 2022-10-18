//
//  main.c
//  chapter_1_getting_started_with_C
//
//  Created by Pavel Pavlov on 10/18/22.
//  Copyright © 2022 Pavel Pavlov. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    int decks;
    puts("Enter a number of decks");
    scanf("%i", &decks);
    if(decks < 1){
        puts("That is nt valid number of decks");
        return 1;
    }
    printf("There are %i cards\n",(decks * 52));
    return 0;
}
