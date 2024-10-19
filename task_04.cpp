#include <vector>




void sort(std::vector<float>& vector){
    bool flag = true;
    while(flag){
        flag = false;
        for(int i{}; i < vector.size()-1; ++i){
            float bufer;
            if(vector.at(i) < vector.at(i+1)){
                flag = true;
                bufer = vector.at(i);
                vector.at(i) = vector.at(i+1);
                vector.at(i+1) = bufer;
            }
        }
    }
}