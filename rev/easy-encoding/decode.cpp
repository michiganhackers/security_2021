#include <iostream>

using namespace std;

std::string decode(std::string input) {
	std::string output = input;
	for (int i = input.size() - 1; i > 0; --i) {
		output[i] = output[i] ^ output[i-1];
	}
	return output;
}

int main(int argc, char* argv[]) {
	cout << decode(argv[1]) << endl;
	return 0;
}

