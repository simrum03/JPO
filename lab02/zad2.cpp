#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

std::string manualReverse(std::string &str){
	std::string reversed;
	for(int i = str.length() - 1; i >= 0; --i){
		reversed += str[i];
	}
	return reversed;
}

int main(){

std::string word;
std::cout << "Enter a word: ";
std::cin >> word;

std::cout << "Your reversed word using manual method: " << manualReverse(word) << std::endl;

std::reverse(word.begin(), word.end());
std::cout << "Your reversed word using (std::reverse) method: " << word;


return 0;
}

