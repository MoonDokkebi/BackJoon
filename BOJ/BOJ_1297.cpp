#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int D; //대각선의 길이
    int H; // TV 높이 비율
    int W; // TV 너비 비율
    double ratio;
    cin >> D >> H >> W;
    ratio = sqrt((double)(D*D) / (H*H + W*W));
    // 52*52=(9*9*16*16)*ratio
    //ratio=   (9*9 * 16*16)/ (52*52)

    cout<< (int)(H*ratio) << " " << (int)(W*ratio);
}