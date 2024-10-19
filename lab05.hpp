#include <utility>
#include <vector>
#include <string>

float mean(const std::vector<float>&);
std::pair<float, float> minMax(const std::vector<float>&);
int argmax(const std::vector<float>&);
void sort(std::vector<float>&);
bool remove_first_negativ_element(std::vector<int>& vec, int& removed_element);
std::string replace(const std::string& str, const std::string& old, const std::string& new_string);
std::vector<std::string> split(const std::string& str, char sep);
std::string join(const std::vector<std::string>& vec, const std::string& sep);