#include <stdio.h>

int main(void) {
    int i;
    char a;
    scanf("%d",&i);//输入需要放到某个地址里，行缓冲，%c会读取换行
    printf("i的输出为%d\n",i);
    fflush(stdin);
    scanf("%c",&a);
    printf("字符结果为%c",a);
    printf("Hello World\n");
    return 0;
}
