#include <string>


std::string replace(const std::string& str, const std::string& old, const std::string& new_string){
    std::string result;
    for(int i{}; i < str.size(); ++i){
        if(i == str.find(old, i)){
            for(auto i: new_string) result.push_back(i);
            i += old.size()-1;
        }else{
            result.push_back(str.at(i));
        }
        
    }
    return result;
}