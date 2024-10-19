#include "lab05.hpp"


float mean(const std::vector<float>& vector){
    float summ = 0;
    for(auto i: vector) summ += i;
    return summ / vector.size();
}