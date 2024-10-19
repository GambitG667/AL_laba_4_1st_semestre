#include <string>
#include <vector>


std::vector<std::string> split(const std::string& str, char sep){
    std::vector<std::string> result;
    int first = -1;
    for(int i{}; i < str.size(); ++i){
        if(str.at(i) != sep && first == -1){
            first = i;
            continue;
        }
        if(str.at(i) == sep){
            std::string res_str = "";
            for(int j{first}; j < i; ++j)if(j < str.size()) res_str.push_back(str.at(j));
            if(res_str != "")result.push_back(res_str);
            first = i+1;
        }else if(i == str.size()-1){
            std::string res_str = "";
            for(int j{first}; j <= i; ++j)if(j < str.size()) res_str.push_back(str.at(j));
            if(res_str != "")result.push_back(res_str);
        }

    }

    return result;
}