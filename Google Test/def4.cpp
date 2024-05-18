#include <iostream>
#include <vector>
#include <limits>
#include <math.h>
#include <string>

int def4(std::vector<std::string> t){
    int minm = INT_MIN;
    for(size_t i = 0; i < t.size(); i++){
        int h1 = std::stoi(t[i].substr(0, 2));
        int mi1 = std::stoi(t[i].substr(3, 2));
        int t1 = h1 * 60 + mi1;
        for(size_t ii = i + 1; ii < t.size(); ii++ ){
            int h2 = std::stoi(t[ii].substr(0, 2));
            int mi2 = std::stoi(t[ii].substr(3, 2));
            int t2 = h2 * 60 + mi2;
            int r = fabs(t1 - t2);
            if(r < minm){
                minm = r;
            }
        }
    }
    return minm;
}