#include <iostream>
#include <cctype>
#include <string>
#include <map>

int main() {
    std::string sentence;
    int vowelCount = 0, consonantCount = 0;
    std::map<char, int> vowelMap, consonantMap;

    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    for (size_t i = 0; i < sentence.length(); ++i) {
        char ch = tolower(sentence[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelCount++;
                vowelMap[ch]++;
            } else {
                consonantCount++;
                consonantMap[ch]++;
            }
        }
    }

    std::cout << "Number of vowels: " << vowelCount << std::endl;
    std::cout << "Vowels found: " << std::endl;
    for (std::map<char, int>::iterator it = vowelMap.begin(); it != vowelMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    std::cout << "Number of consonants: " << consonantCount << std::endl;
    std::cout << "Consonants found: " << std::endl;
    for (std::map<char, int>::iterator it = consonantMap.begin(); it != consonantMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    return 0;
}

