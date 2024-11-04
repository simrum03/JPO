#include <iostream>
#include <vector>

int sumMatrix(std::vector<std::vector<int>> &matrix){
	int sum{};
	int rows = matrix.size();
	int columns = matrix[0].size();

	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			if(i % 2 != 0 || j % 2 == 0){
				sum+= matrix[i][j];
			}
		}
	}

return sum;
}

int main(){

int rows{}, columns{};
srand(static_cast<unsigned int>(time(0)));

std::cout << "Input rows number: ";
std::cin >> rows;
std::cout << "Input columns number: ";
std::cin >> columns;

std::vector<std::vector<int>> matrix(rows, std::vector<int>(columns));

for (int i = 0; i < rows; i++){
	for (int j = 0; j < columns; j++){
		int randomNumber = rand() % 10;
		matrix[i][j] = randomNumber;
	}
}

std::cout << "Your matrix: " << std::endl;
for (auto &row : matrix){
	for(int val : row){
		std::cout << val << " ";
	}
	std::cout << std::endl;
}

int sum = sumMatrix(matrix);
std::cout << "Sum of numbers from odd rows, and even columns: " << sum << std::endl;

return 0;
}


