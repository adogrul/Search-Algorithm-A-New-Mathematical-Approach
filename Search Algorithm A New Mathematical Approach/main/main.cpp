#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "../headers/Library.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    /*
        -Değişken Tanımlaması-
        ASCIIMeanSearch asciiMeanSearch;
        string fileDirectory = "C:\\Users\\User\\Desktop\\test.txt";
        string word = "accumsan";
        std::vector<std::string> words;

        -Örnek Senaryo Kullanımı-
        asciiMeanSearch.stringLength(word); //Tamamlandı
            -Terminalde yazdırılacak-
        
        asciiMeanSearch.calculateMean(word); //Tamamlandı
            -Terminalde yazdırılacak-
        
        words = asciiMeanSearch.takeWords(fileDirectory);
            -Dosyadan Okunan Kelimeleri aldık-

        int size = words.size();
        int* _searchSpaceMean = new int[size];
        
        for(auto word : words){
            _searchSpaceMean.push_back(asciiMeanSearch.calculateMean((char*)word.c_str()));
        }
        -Dosyadan Okunan Kelimelerin Ortalamalarını Hesapladık-
        -Ortalamaları bi r vectorde tuttuk-

        //Bu Adımdan sonra yazılacak algoritmaya Göre işlem yapılacak
        
        
        delete[] _searchSpaceMean;
    */

   /*
   First Section
   ASCIIMeanSearch asciiMeanSearch;
    std::string word = "accumsan";
    asciiMeanSearch.stringLength((char*)word.c_str());
    asciiMeanSearch.calculateMean((char*)word.c_str());
*/

/*
Second  Section
    std::vector<std::string> words;
    ASCIIMeanSearch asciiMeanSearch;
    string fileDirectory = "../Test.txt";
    words = asciiMeanSearch.takeWords(fileDirectory);
    for(int i = 0; i < 20; i++){
        cout<<words[i]<<" ";
    }
    */

    return 0;
}
