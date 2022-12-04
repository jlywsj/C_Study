#pragma once
#if !defined(__MY_STRING)
#define __MY_STRING

char* inStr();
// 需要全局修改指针变量，用到指向指针的指针
int getIntArr(int**);

#endif // __MY_STRING