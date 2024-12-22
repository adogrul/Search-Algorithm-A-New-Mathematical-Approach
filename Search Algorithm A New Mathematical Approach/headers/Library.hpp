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
    float _meanOfString;
    std::string _string;

public:

    ASCIIMeanSearch(int maxLength = 0)
        : _StringLength(maxLength), _meanOfString(0){
        _string = new char[_StringLength + 1]();
    }

    ~ASCIIMeanSearch() {

    }

    int stringLength( const char * _string)  {
        int length = strlen(_string);
        cout << "Length of " << _string << " is " << length << endl;
        return length;
    }

    int calculateMean(const char* _string) {
        if (!_string || strlen(_string) == 0) {
            return 0;
        }
        float sum = 0;
        float length = static_cast<float> (stringLength(_string));
        for (int i = 0; i < length; ++i) {
            cout<<static_cast <float>(_string[i])<<" - ";
            sum += static_cast<float>(_string[i]);

        }
        _meanOfString = sum / length;

        cout << "Mean of " << _string << " is " << _meanOfString << endl;
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
