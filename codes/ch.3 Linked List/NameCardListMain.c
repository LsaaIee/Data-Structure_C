#include <stdio.h>
#include "NameCard.h"

int main(){
    List list;
    NameCard * newCard;
    ListInit(&list);
    
    newCard = MakeNameCard("Jonas", "010-1234-5678");
    LInsert(&list, newCard);
    
    newCard = MakeNameCard("Peter", "010-8765-4321");
    LInsert(&list, newCard);
    
    newCard = MakeNameCard("Kevin", "010-5678-1234");
    LInsert(&list, newCard);
    
    if (LFirst(&list, &newCard)){
        if (!NameCompare(newCard, "Jonas")){
            ShowNameCardInfo(newCard);
        }
        else {
            while (LNext(&list, &newCard)){
                if(!NameCompare(newCard, "Jonas")){
                    ShowNameCardInfo(newCard);
                    break;
                }
            }
        }
    }
    
    if (LFirst(&list, &newCard)){
        if (!NameCompare(newCard, "Peter")){
            ChangePhoneNum(newCard->phone, "010-1111-2222");
        }
        else {
            while (LNext(&list, &newCard)){
                if (!NameCompare(newCard, "Peter")){
                    ChangePhoneNum(newCard->phone, "010-1111-2222");
                    break;
                }
            }
        }
    }
    
    if (LFirst(&list, &newCard)){
        if (!NameCompare(newCard, "Kevin")){
            LRemove(&list);
        }
        else {
            while (LNext(&list, &newCard)){
                if (!NameCompare(newCard, "Kevin")){
                    LRemove(&list);
                    free(newCard);
                    break;
                }
            }
        }
    }
    
    if (LFirst(&list, &newCard)){
        ShowNameCardInfo(newCard);
        
        while (LNext(&list, &newCard)){
            showNameCardInfo(newCard);
        }
    }
    
    return 0;
}
