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



class ASCIIMeanSearch {
private:
    int _StringLength;
    float _meanOfString;
    std::string _string;

public:

    ASCIIMeanSearch(int maxLength = 0) : _StringLength(maxLength), _meanOfString(0){
        _string = new char[_StringLength + 1]();
    }

    ~ASCIIMeanSearch() {}

    int stringLength( const char * _string)  {
        int length = strlen(_string);
        //std::cout << "Length of " << _string << " is " << length << endl;
        return length;
    }

    float calculateMean(const char* _string) {
        if (!_string || strlen(_string) == 0) {
            return 0;
        }
        float sum = 0;
        float length = static_cast<float> (stringLength(_string));
        for (int i = 0; i < length; ++i) {
            
            
            sum += static_cast<float>(_string[i]);

        }
        
        _meanOfString = sum / length;
       // cout << "Mean of " << _string << " is " << _meanOfString << endl; if youu want to check results and see mean of string u can open this block 
       // this will cause a performance degradation of 10 times
        return static_cast<float> (_meanOfString);
    }

    std::vector<std::string> takeWords(const std::string& _fileDirectory) {
    std::vector<std::string> _words;
    ifstream file(_fileDirectory);      
    std::string line;

    if (file.is_open()) {
        
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string word;

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
        std::cerr << "File Cannot Open: " << _fileDirectory << std::endl;
    }
    return _words;
}
    

    void search(const std::string& _fileDrirectory_ , std::string _word , std::vector<std::string> _wordSpace){  
        /*
        1- tüm kelimeleri al
        2- fonksiyon içine aranacak kelimeyi gir
        3- tüm kelimelerin ortalamasını bir diziye at
        4- kelimenin ortalaması ile eşleşenleri gruplandır
        5- aynı grup içindeki kelimeleri sayısal depğil string olarak ara
        6- eşleşenleri ekrana yazdır
        */
       /*
       (ENG)
            1- take all words
            2- enter the word to be searched into the function
            3- put the average of all words in an array
            4- group the ones that match the average of the word
            5- search the words in the same group not numerically but as a string
            6- print the matches to the screen
       */
       
    std::vector<std::string> _searchSpaceMean;
    _wordSpace = takeWords(_fileDrirectory_);
    int size = stringLength((char*)_word.c_str());
    float _meanOfString = calculateMean((char*)_word.c_str());
    for(auto word : _wordSpace){
        float temp = calculateMean((char*)word.c_str());
        if (_meanOfString == temp)
        {
            _searchSpaceMean.push_back((char*)word.c_str());
        }   
    }
    _wordSpace.clear();
    
    for(auto word : _searchSpaceMean){
        _wordSpace.push_back(word);
    }
    for(auto word : _wordSpace){
        std::string temp = _word;
        if(temp == word){
            std::cout<<"---------------------------------------\n"<<word<<" ";
        }
    }


    }
};

#endif // LIBRARY_HPP
