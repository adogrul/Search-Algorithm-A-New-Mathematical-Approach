#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <filesystem>
using namespace std;


class ASCIIMeanSearch {
private:
    int _StringLength;
    int _meanOfString;
    char* _string;

public:

    ASCIIMeanSearch(int maxLength = 0)
        : _StringLength(maxLength), _meanOfString(0){
        _string = new char[_StringLength + 1]();
    }

    // Yıkıcı (Destructor)
    ~ASCIIMeanSearch() {
        delete[] _string;
    }

    int stringLength(char * _string)  {
        int length = strlen(_string);
        return _StringLength;
    }

        int get_file_size(const std::string& _directory){
        /*(TR) İmlecin konumunu döndürüp dosya boyutunu bulunur.
        (EN) Returns the position of the cursor and finds the file size.
        */
        std::ifstream file(_directory, std::ios::in | std::ios::binary);
        file.seekg(0, std::ios::end); 
        int fileSize = file.tellg();
        return fileSize;
    }

    void setString(const char* str) {
        if (str) {
            size_t length = std::min(strlen(str), static_cast<size_t>(_StringLength));
            strncpy(_string, str, length);
            _string[length] = '\0';
        }
    }

    int calculateMean(char* _string) {
        if (!_string || strlen(_string) == 0) {
            return 0;
        }
        int sum = 0;
        int length = stringLength(_string);
        for (int i = 0; i < length; ++i) {
            sum += static_cast<int>(_string[i]);
        }
        _meanOfString = sum / length;
        return _meanOfString;
    }

std::vector<std::string> takeWords(const std::string& _fileDirectory) {
    std::vector<std::string> _words;
    ifstream file(_fileDirectory);      
    string line;

    if (file.is_open()) {
        
        while (std::getline(file, line)) {
            stringstream ss(line);
            string word;

            while (ss >> word) {
                word.erase(
                    std::remove_if(
                    word.begin(), word.end(), [](char c) {
                        return std::ispunct(static_cast<unsigned char>(c));}),
                        word.end());
                if (!word.empty()) {
                    _words.push_back(word);
                }
            }
        }

        file.close();
    } else {
        std::cerr << "Dosya açılamadı: " << _fileDirectory << std::endl;
    }

    return _words;
}


    //search()

};

#endif // LIBRARY_HPP