#ifndef WORDS_H
#define WORDS_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>

namespace words {
    // Gets list of words from text file
    std::vector<std::string> readDictionary(std::string filename);

    // Finds words with letter sum equal to the target sum
    std::vector<std::string> findWordsWithLetterSum(int targetSum, const std::vector<std::string>& wordVector);
}

#endif // WORDS_H
