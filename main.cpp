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
        if (result.size() > 20) { // arbitrary threshold; adjust as needed
            std::cout << "Found " << result.size() << " words. The list is too long to display. ";
            std::cout << "Would you like to save it to a file? (yes/no): ";
            string choice;
            std::cin >> choice;
            if (choice == "yes" || choice == "y") {
                ofstream outfile("results.txt");
                for (const std::string& word : result) {
                    outfile << word << "\n";
                }
                outfile.close();
                std::cout << "Results saved to results.txt\n";
            }
        } else {
            std::cout << "Words with letter sum equal to " << targetSum << ":\n";
            for (const std::string& word : result) {
                std::cout << word << "\n";
            }
        }
    } else {
        std::cout << "No words found with letter sum equal to " << targetSum << "\n";
    }

    return 0;
}
