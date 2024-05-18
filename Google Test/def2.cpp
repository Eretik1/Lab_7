#include <iostream>

bool def2(int sx, int sy, int fx, int fy, int t){
    int vx = fx - sx, vy = fy - sy;
    vx = vx >= 0 ? vx : vx * (-1);
    vy = vy >= 0 ? vy : vy * (-1);
    if((vx > t) || (vy > t)){
        return 0;
    }
    return 1;
    }