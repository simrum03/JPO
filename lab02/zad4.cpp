#include <iostream>
#include <string>
#include <algorithm>

int main(){

int count{};
std::string sentence;
char character;

std::cout << "Enter a sentence: ";
std::getline(std::cin, sentence);

std::cout << "Enter a character: ";
std::cin >> character;

for (char c : sentence){
	if(std::tolower(c) == std::tolower(character)){
		count++;
	}
}

std::cout << "The character: '" << character << "' appeared " << count << " times in the sentence.";

return 0;
}
