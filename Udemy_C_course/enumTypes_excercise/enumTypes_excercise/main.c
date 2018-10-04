//
//  main.c
//  enumTypes_excercise
//
//  Created by QA on 4.10.18.
//  Copyright © 2018 Pavel Pavlov. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;
    enum Company facebook = FACEBOOK;
    enum Company yahoo = YAHOO;
    enum Company microsoft = MICROSOFT;
    
    printf("The value of xerox is: %d", xerox);
    printf("The value of google is: %d", google);
    printf("The value of ebay is: %d", ebay);
    
    
    return 0;
    
}
