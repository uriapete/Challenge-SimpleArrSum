#include <iostream>
#include <string>
#include <vector>
#include <random>

std::mt19937 RNG;
std::uniform_int_distribution<u_int8_t> singDigitDist(0,9);

int simpleArraySum(std::vector<int> arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        sum+=arr[i];
    }
    return sum;
    
}

std::vector<int> exArr = {1,2,3};

void printIntVect(std::vector<int> arr) {
    std::cout << "{ ";
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        std::cout << arr[i];
        if (i+1 < arr.size()) {std::cout << ", ";}
    }
    std::cout << " }";
    
}

void printVectAndSum(std::vector<int> arr) {
    printIntVect(arr);
    std::cout << " -> " << simpleArraySum(arr) << "\n\n";
}

std::vector<int> createRandSingDigitVect(){
    std::vector<int> intVect = {};
    int num = singDigitDist(RNG);
    while (num == 0)
    {
        /* code */
        num = singDigitDist(RNG);
    }
    while (num != 0)
    {
        /* code */
        intVect.push_back(num);
        num = singDigitDist(RNG);
    }
    return intVect;
    
}

int main() {
    // printIntVect(exArr);
    // std::cout << " -> " << simpleArraySum(exArr) << "\n\n";
    printVectAndSum(exArr);
    RNG.seed(time(0));
    printVectAndSum(createRandSingDigitVect());
    printVectAndSum(createRandSingDigitVect());
    printVectAndSum(createRandSingDigitVect());
}