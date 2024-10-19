#include <iostream>
#include <utility>
#include <vector>
#include "lab05.hpp"



int main(){

    std::vector<float> vector = {1, 1.5, 5, 6.1, 7.9};
    std::vector<float> void_vector;
    std::vector<int> vector_with_negativ = {1, 2, -6, 7,10, -1};

    std::cout << mean(vector) << std::endl;
    std::pair<float, float> res1 = minMax(vector);
    std::pair<float, float> res2 = minMax(void_vector);

    std::cout << res1.first << " " << res1.second << std::endl;
    std::cout << res2.first << " " << res2.second << std::endl;

    std::cout << argmax(vector) << ' ' << argmax(void_vector) << std::endl;

    sort(vector);
    for(auto i: vector) std::cout << i << " ";
    std::cout << std::endl;

    int remuved_element=0;
    bool result = remove_first_negativ_element(vector_with_negativ, remuved_element);
    for(auto i: vector_with_negativ) std::cout << i << " ";
    std::cout << '\n' << result << ' ' << remuved_element <<std::endl;

    std::cout << replace("Can go can canner can do it", "can", "MAKE") <<std::endl;

    for(auto i: split("hello", ';')) std::cout<< i << ' ';
    std::cout<<std::endl;

    for(auto i: split(";can-i;hello;", ';')) std::cout<< i << ' ';
    std::cout<<std::endl;
    for(auto i: split(";;;;;;", ';')) std::cout<< i << ' ';
    std::cout<<std::endl;

    std::vector<std::string> arr = {"hello", "can", "i", "BMSTU"};
    std::cout << join(arr, "(0;0)")<<std::endl;

    return 0;
}