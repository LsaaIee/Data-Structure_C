#include <stdio.h>
#include "NameCard.h"

NameCard * MakeNameCard(char * name, char * phone){
    NameCard * cardName = (NameCard*)malloc(sizeof(NameCard));
    strcpy(cardName->name, name);
    strcpy(cardName->phone, phone);
    return cardName;
}

void ShowNameCardInfo(NameCard * pcard){
    printf("Name: %s\nPhone #: %s\n", pcard->name, pcard->phone);
}

int NameCompare(NameCard * pcard, char * name){
    return strcmp(pcard->name, name);
}

void ChangePhoneNum(NameCard * pcard, char * phone){
    strcpy(pcard->phone, phone);
}
