#include <iostream>
#include <limits>
#include <vector>

std::vector<std::vector<int>> def8(std::vector<std::vector<int>>& bushes){
    std::vector<std::vector<int>> fense;
    int xmax = INT_MIN, ymax = INT_MIN, xmin = INT_MAX, ymin = INT_MAX;
    for(size_t i = 0; i < bushes.size(); i++){
        if(bushes[i][0] > xmax){
            xmax = bushes[i][0];
        }
        else if(bushes[i][0] < xmin){
            xmin = bushes[i][0];
        }
        if(bushes[i][1] > ymax){
            ymax = bushes[i][1];
        }
        else if(bushes[i][1] < ymin){
            ymin = bushes[i][1];
        }
    }
    for(size_t i = 0; i < bushes.size(); i++){
        if((bushes[i][0] == xmax) || (bushes[i][1] == ymax) || (bushes[i][0] == xmin) || (bushes[i][1] == ymin)){
            fense.push_back(bushes[i]);
        }
    }
    return fense;
}