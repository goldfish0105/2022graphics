///�Ʊ�༽��mp3
///MP3�ɮפp vs. WAV�ɮפj PlaySound()
///�����Y/��     ��l���
#include "CMP3_MCI.h"///�U���A��b�P�ؿ�
#include <stdio.h>
CMP3_MCI mp3;
int main()
{
    mp3.Load("07042111.mp3");
    mp3.Play();
    printf("�{�b���b����Ϫ��n��\n");
    int N;///��@�Ӥ��d��A���n����
    scanf("%d",&N);
}
