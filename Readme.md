
# Search Algorithm: A New Mathematical Approach

## What is a Pattern Search Algorithm?
A pattern search algorithm is a computational method used to locate a specific sequence of characters (pattern) within a larger body of text. These algorithms are widely utilized in various applications such as text processing, data retrieval, and bioinformatics.


## What Does This Algorithm Do?
Pattern search algorithms identify all occurrences of a given pattern within a text and return their positions or simply verify the presence of the pattern. Depending on the algorithm, this search can be done efficiently, even for large texts or complex patterns. Examples of pattern search algorithms include Rabin-Karp, Knuth-Morris-Pratt (KMP), and Boyer-Moore.


## Overview
`ASCIIMeanSearch` is a C++ library designed to calculate the ASCII mean of strings and perform searches based on this mean. The library provides utility functions for reading words from a file, calculating ASCII means of strings, and finding words with matching ASCII mean values.

## Features
- Calculate the ASCII mean of a string.
- Read and process words from a text file.
- Search for words with the same ASCII mean as a target word.
- Remove punctuation and process text efficiently.

## Class: `ASCIIMeanSearch`

### Constructor & Destructor
- `ASCIIMeanSearch(int maxLength = 0)`: Initializes the object with a specified maximum string length.
- `~ASCIIMeanSearch()`: Destructor to clean up resources.

### Public Methods

#### `int stringLength(const char* _string)`
Returns the length of the given string.

#### `float calculateMean(const char* _string)`
Calculates and returns the ASCII mean of the given string. Outputs the mean to the console.

#### `std::vector<std::string> takeWords(const std::string& _fileDirectory)`
Reads words from the file at the specified directory, removes punctuation, and returns them as a vector of strings.

#### `void search(const std::string& _fileDirectory, std::string _word, std::vector<std::string> _wordSpace)`
Performs a search to find words with the same ASCII mean as the given word. Outputs matching words to the console.

## How It Works
1. **Read Words from File**:
   - The `takeWords` function reads all the words from a file, processes them to remove punctuation, and stores them in a vector.

2. **Calculate ASCII Mean**:
   - Each character's ASCII value is summed up and divided by the length of the string to calculate its mean.

3. **Search by Mean**:
   - The `search` function compares the ASCII mean of the target word with the means of all words from the file and groups matches.

4. **Output Matches**:
   - Words with matching ASCII means are printed to the console.

## Example Usage
```cpp
#include "library.hpp"

int main() {
    ASCIIMeanSearch meanSearch;

    // File directory containing text
    std::string fileDirectory = "example.txt";

    // Word to search for
    std::string targetWord = "hello";

    // Vector to store matching words
    std::vector<std::string> matches;

    // Perform the search
    meanSearch.search(fileDirectory, targetWord, matches);

    return 0;
}
```

## Sample Output
Assume `example.txt` contains:
```
hello world test example
``` 
If the target word is `hello`, the output might look like:
```
---------------------------------------
hello world
```

## File Structure
```
.
├── library.hpp
└── example.txt
```

## Requirements
- C++17 or later
- Standard Library headers: `<string>`, `<iostream>`, `<fstream>`, `<vector>`, `<sstream>`, `<algorithm>`, `<cctype>`, `<filesystem>`

## Compilation
Use the following command to compile the program:
```bash
g++ -std=c++17 -o program main.cpp
```

## Notes
- Ensure the file path provided to `takeWords` and `search` is correct.
- The `search` function outputs words with matching ASCII means to the console.

