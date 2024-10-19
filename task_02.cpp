#include <limits>
#include <utility>
#include <vector>



std::pair<float, float> minMax(const std::vector<float>& vector){
    std::pair<float, float> result; //.firs = min .second = max

    if(vector.size() == 0){
        result.first = std::numeric_limits<float>::min();
        result.second = std::numeric_limits<float>::max();
        return result;
    }

    result.first = vector.at(0);
    result.second = vector.at(0);

    for(auto i: vector){
        if(i < result.first) result.first = i;
        else if(i > result.second) result.second = i;
    }
    return result;

}