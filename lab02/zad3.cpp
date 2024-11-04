#include <iostream>
#include <string>
#include <algorithm>

bool manualPalindrome(std::string &str){
	int left = 0;
	int right = str.length() - 1;

	while (left < right){
		if(str[left] != str[right]){
			return false;
		}
	left++;
	right--;
	}
return true;
}

int main(){

std::string word;
std::cout << "Enter a word: ";
std::cin >> word;

std::cout << "Checking if word is a palindrome (using manual method): " << (manualPalindrome(word) ? "Yes" : "No") << std::endl;

std::string copyWord = word;
std::reverse(word.begin(), word.end());
bool autoPalindrome = (copyWord == word);

std::cout << "Checking if word is a palindrome (using std::reverse method): " << (autoPalindrome ? "Yes" : "No");

return 0;
}
