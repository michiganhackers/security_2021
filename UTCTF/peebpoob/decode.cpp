#include <iostream>
#include<vector>

using namespace std;

void encode(vector<int> &param_1) {
    int uVar2;
    for (int i = 0; i < param_1.size(); ++i) {
        uVar2 = i & 3;
        if (uVar2 < 4) {
            switch (uVar2) {
            case 0:
                param_1[i] = param_1[i] ^ 33;
                break;
            case 1:
                param_1[i] = param_1[i] ^ 7;
                break;
            case 2:
                param_1[i] = param_1[i] ^ 35;
                break;
            case 3:
                param_1[i] = param_1[i] ^ 5;
            }
        }
        if (i + 1 < param_1.size()) {
            param_1[i + 1] = param_1[i] ^ param_1[i + 1];
        }
    }
    return;
}

int main()
{
    int flag[] = { 0x54,0x27,0x62,0x0b,0x4b,0x2b,0x73,0x14,0x06,0x32,0x61,0x3b,0x78,0x4f,0x5c,0x29,0x57,0x20,0x30,0x06,0x45,0x1d,0x4e,0x7b,0x6a,0x0f,0x51, 0x5e, 0x00, 0x00, 0x00, 0x00};
    vector<int> current;
    for (int i = 0; i < 32; ++i) {
        for (int k = 0; k < 255; ++k) {
            vector<int> temp = current;
            temp.push_back(k);
            encode(temp);
            if (temp[i] == flag[i]) {
                current.push_back(k);
                break;
            }
        }
    }
    for (int chr : current) {
        cout << (char)(chr);
    }

    return 0;
}
