#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include "words.h"


using namespace std;
namespace words{

//Gets list of words from text file
vector<string> readDictionary(string filename) {
    vector<string> dictionary;
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: could not open file " << "words.txt" << endl;
        return dictionary;
    }

    string word;
    while (getline(file, word)) {
        dictionary.push_back(word);
    }

    file.close();
    return dictionary;
}

std::vector<std::string> findWordsWithLetterSum(int targetSum, const std::vector<std::string>& wordVector) {
    std::vector<std::string> result;

    for (const std::string& word : wordVector) {
        int sum = 0;
        for (char letter : word) {
            if (isalpha(letter)) {
                sum += std::tolower(letter) - 'a' + 1;
            }
        }
        if (sum == targetSum) {
            result.push_back(word);
        }
    }

    return result;
}

}