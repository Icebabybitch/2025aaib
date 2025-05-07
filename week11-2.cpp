// week11-2.cpp
// 函式宣告，定義，呼叫
#include <stdio.h>

int addnum(int a, int b)// 宣告參數形狀名字
{
    printf("addnum()函式,a:%d b:%d\n",a,b);
    int x;
    x = a+b;
    printf("兩數相加,%d return回傳\n",x);
    return x;
}


int main()
{
    int ans = addnum(10,30);
    printf("%d",ans);
}
