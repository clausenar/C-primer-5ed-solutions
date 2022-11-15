#include<iostream>
#include<vector>
#include<cstring>
#include<map>
#include<string>
#include <sstream>
using namespace std;

#include <map>

int main()
{
    // The test string
    std::string str("heh heh med dig");
    cout << str << "\n";
    
    // Count the number of occurrences for each word
    std::string word;
    std::istringstream iss(str);
    std::map<std::string, std::size_t> occurrences;
    while (iss >> word) ++occurrences[word];
    
    // Print the results
    for (std::map<std::string, std::size_t>::iterator it = occurrences.begin(); 
         it != occurrences.end(); ++it)
    {
        std::cout << "Word: " << it->first << "\t Occurrences: " << it->second << std::endl;
    }

    std::cin.get();
    return 0;
}
