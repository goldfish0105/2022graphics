///#include <mmsystem.h>///�W�g��
///SND_SYNC�n���ݦP�BvsSND_ASYNC�����ݡB���P�B
#include <windows.h>
#include <stdio.h>///printf()
int main()
{
    printf("�{�b�bPlaySound()�e\n");
    PlaySound("07042111.wav",NULL,SND_ASYNC);
    printf("�{�b�bPlaySound()��\n");
    int N;
    scanf("%d",&N);///���A��J�Ʀr
}
