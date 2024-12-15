#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <string>
#include <iostream>
#include <fstream>

class ASCIIMeanSearch {
private:
    int _StringLength;
    int _meanOfString;
    char* _string;
    std::string _fileDirectory;

public:

    ASCIIMeanSearch(int maxLength = 0, const std::string& fileDirectory = "")
        : _StringLength(maxLength), _meanOfString(0), _fileDirectory(fileDirectory) {
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

    void setString(const char* str) {
        if (str) {
            size_t length = std::min(strlen(str), static_cast<size_t>(_StringLength));
            strncpy(_string, str, length);
            _string[length] = '\0';
        }
    }

    int calculateMean() {
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

};

#endif // LIBRARY_HPP
