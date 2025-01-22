#include <iostream>
#include <memory>
using namespace std;

int main() {

	size_t size{ 0 };
	cin >> size;

	auto arr{ std::make_unique<float[]>(size) };
	for (size_t i{}; i < size; i++) {
		arr[i] = static_cast<float>(1 / pow((1 + i), 2));
		cout <<endl<< arr[i];
	}

	float sum{ 0 };
	for (size_t i{}; i < size; i++)
		sum += arr[i];

	cout<<endl << sqrt(sum * 6);
	return 0;
}