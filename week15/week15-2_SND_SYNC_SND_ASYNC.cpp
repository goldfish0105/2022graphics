///#include <mmsystem.h>///上週教
///SND_SYNC要等待同步vsSND_ASYNC不等待、不同步
#include <windows.h>
#include <stdio.h>///printf()
int main()
{
    printf("現在在PlaySound()前\n");
    PlaySound("07042111.wav",NULL,SND_ASYNC);
    printf("現在在PlaySound()後\n");
    int N;
    scanf("%d",&N);///等你輸入數字
}
