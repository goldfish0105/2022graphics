#include <opencv/highgui.h>
int main()
{///Ipl是Intel performance library的縮寫
    IplImage*img=cvLoadImage("car.jpg");///讀圖
    cvShowImage("week09",img);///秀圖
    cvWaitKey(0);///等任意鍵繼續
}
