#include <opencv/highgui.h>
int main()
{///Ipl�OIntel performance library���Y�g
    IplImage*img=cvLoadImage("car.jpg");///Ū��
    cvShowImage("week09",img);///�q��
    cvWaitKey(0);///�����N���~��
}
