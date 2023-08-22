#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE 1
#define FALSE 2

#define LIST_LEN 100
typedef int LData;

typedef struct __ArrayList{
    LDATA arr[LIST_len];
    int numOfData;
    int curPosition;
} ArrayList;

typedef ArrayList List;

void ListInit(List * plist);
void LInert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext (List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif
