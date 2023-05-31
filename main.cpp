#include <iostream>
#include <string>
#include <vector>

std::string makeUpperCase (std::string input_str)
{
    std::string Returnable;
    for (int i = 0; i < input_str.size(); i++)
        Returnable += std::toupper((char) input_str.at(i));
    return Returnable;
}

std::vector<std::string> string_to_array(const std::string& s) {
    std::vector <std::string> Returnable;
    std::string TempString = "";
    for (int i = 0; i < s.size(); i++) {

        if ((char)s.at(i) != 32) {
            TempString += s.at(i);
        }
        else if (!TempString.empty()) {
            Returnable.push_back(TempString);
            TempString = "";
        }
    }
    if (!TempString.empty()) {
        Returnable.push_back(TempString);
    }
    else if (s.empty()) {
        Returnable.emplace_back("");
    }
    return Returnable;
}

int sum(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums.at(i);
    }
    return sum;
}

bool lovefunc(int f1, int f2) {
    if (f1 % 2 == 0 && f2 % 2 == 1 || f1 % 2 == 1 && f2 % 2 == 0) {
        return true;
    }
    return false;
}

int paperwork(int n, int m) {
    if (!(n<0 || m<0))
        return n*m;
    return 0;
}

int main() {
    std::string MainString = "hello world";
    std::string UpperCased = makeUpperCase(MainString);
    std::cout << UpperCased << std::endl;
    std::vector<std::string> WordVector = string_to_array("I like CPP");
    for (int i = 0; i < WordVector.size(); i++)
        std::cout << WordVector.at(i) << std::endl;
    int SumTestOne = sum(std::vector<int>{394, 393, 293, 2838});
    std::cout << SumTestOne << std::endl;
    int SumTestTwo = sum(std::vector<int>{});
    std::cout << SumTestTwo << std::endl;
}