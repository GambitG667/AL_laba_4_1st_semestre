#include <vector>



int argmax(const std::vector<float>& vector){
    int result = -1;
    if(vector.size() == 0) return result;
    float max_val = vector.at(0);
    result = 0;
    for(int i{}; i < vector.size(); ++i){
        if(vector.at(i) > max_val){
            max_val = vector.at(i);
            result = i;
        }
    }

    return result;
}