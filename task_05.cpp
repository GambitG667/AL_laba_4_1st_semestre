#include <vector>



bool remove_first_negativ_element( std::vector<int>& vec, int& removed_element){
    removed_element = -1;
    for(int i{}; i < vec.size(); ++i){
        if( vec.at(i) < 0){
            removed_element = vec.at(i);
            vec.erase(vec.begin()+i);
            return true;
        }
    }
    return false;
}