#include <iostream>

using namespace std;

std::string encode(std::string input) {
	std::string output = input;
	for (int i = 0; i < input.size() - 1; ++i) {
		output[i + 1] = output[i] ^ output[i + 1];
	}
	return output; 
}

int main(int argc, char* argv[]) {
	if (argc < 2) {
		cout << "usage: " << argv[0] << " <string to encode>" << endl;
		return 1;
	}
	cout << encode(argv[1]) << endl;
	return 0;
}
