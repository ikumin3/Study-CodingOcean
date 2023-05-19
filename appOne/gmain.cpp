#include"libOne.h"
void gmain() {
    window(800, 600);
    
    int backImg =  loadImage("assets\\background.png");
    int buta1Img =  loadImage("assets\\buta1.png");
    image(backImg, 0, 0);
    image(buta1Img, 0, 0);
    pause();
}