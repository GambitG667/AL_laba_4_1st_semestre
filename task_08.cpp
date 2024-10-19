#include <string>
#include <vector>


std::string join(const std::vector<std::string>& vec, const std::string& sep){
    std::string result;
    for(int i{}; i < vec.size(); ++i){
        result += vec.at(i);
        if(i != vec.size()-1) result += sep;
    }
    return result;
}