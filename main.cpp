#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include "words.h"



using namespace std;
using namespace words;

int main() {
    vector<string> dictionary = readDictionary("english.txt");
    int targetSum;
    std::cout << "Enter the target sum: ";
    std::cin >> targetSum;

    std::vector<std::string> result = findWordsWithLetterSum(targetSum, dictionary);

    if (!result.empty()) {
        std::cout << "Words with letter sum equal to " << targetSum << ":\n";
        for (const std::string& word : result) {
            std::cout << word << "\n";
        }
    } else {
        std::cout << "No words found with letter sum equal to " << targetSum << "\n";
    }

    return 0;
}