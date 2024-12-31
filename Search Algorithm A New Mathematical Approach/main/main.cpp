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

        (ENG)
        -Variable Definition-
        ASCIIMeanSearch asciiMeanSearch;
        string fileDirectory = "C:\\Users\\User\\Desktop\\test.txt";
        string word = "accumsan";
        std::vector<std::string> words;

        -Example Scenario Usage-
        asciiMeanSearch.stringLength(word); //Completed
            -Printed in Terminal-

        asciiMeanSearch.calculateMean(word); //Completed
            -Printed in Terminal-
        
        words = asciiMeanSearch.takeWords(fileDirectory);
            -We took the words read from the file-

        int size = words.size();
        int* _searchSpaceMean = new int[size];
        
        for(auto word : words){
            _searchSpaceMean.push_back(asciiMeanSearch.calculateMean((char*)word.c_str()));
        }
        -We calculated the averages of the words read from the file-
        -We kept the averages in a vector-

        //After this step, the process will be done according to the algorithm to be written

        delete[] _searchSpaceMean;

    */

   /*
   //First Section
   ASCIIMeanSearch asciiMeanSearch;
    std::string word = "deterjan";
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
/*
   //Third Section
    std::vector<std::string> words;
    ASCIIMeanSearch asciiMeanSearch;
    string fileDirectory = "../Test.txt";
    words = asciiMeanSearch.takeWords(fileDirectory);
    for(int i = 0; i < 10; i++){
        asciiMeanSearch.calculateMean((char*)words[i].c_str());
    }
*/

/*
    //Last Section
    ASCIIMeanSearch asciiMeanSearch;
    std::vector<std::string> words;
    std::string fileDirectory = "../Test.txt";
    std::string word = "cursus";
    words = asciiMeanSearch.takeWords(fileDirectory);
    asciiMeanSearch.search(fileDirectory, word, words);
*/
    

    return 0;
}
