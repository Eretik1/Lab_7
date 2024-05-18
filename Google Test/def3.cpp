#include <iostream>
#include <string>

bool test1_1(char c){
    for(int i = 0; i < 10; i++){
        if(c == char(i + '0')){
            return 1;
        }
    }
    return 0;
}

std::string def3(std::string equation){
    std::string s = "";
    int sig = 1;
    int n = 0;
    int x = 0;
    std::string k = "0";
    int x1, n1;
    for(size_t i = 0; i < equation.size(); i++){
        if(equation[i] == '-'){
            n += std::stoi(k) * sig;
            sig = -1;
            k = "0";
        }
        else if(equation[i] == '+'){
            n += std::stoi(k) * sig;
            sig = 1;
            k = "0";
        }
        else if(test1_1(equation[i])){
            k += equation[i]; 
        }
        else if(equation[i] == 'x'){
            if(k == "0"){
                x += 1 * sig;
            }
            else{
                x += std::stoi(k) * sig;
            }
            k = "0";
        }
        else if(equation[i] == '='){
            n += std::stoi(k) * sig;
            k = "0";
            sig = 1;
            x1 = x;
            n1 = n;
            n = 0;
            x = 0;
        }
    }
    n += std::stoi(k) * sig;
    if((n1 == n) & (x1 == x)){
        s = "Infinite";
        return s;
    }
    else{
        int rn = n - n1, rx = x1 - x;
        if(rx == 0){
            s =  "NO";
            return s;
        }
        int r = rn / rx;
        s = "x=" + std::to_string(r);
        return s;
    }
}