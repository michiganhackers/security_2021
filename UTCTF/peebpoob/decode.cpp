#include <iostream>
#include<vector>

using namespace std;

int recurrence(int param) {
    if (param == 0) {
        return 3;
    }
    if (param == 1) {
        return 5;
    }
    int var1 = recurrence(param - 1);
    int var2 = recurrence(param - 2);
    return var2 * 3 + var1 * 2;
}


int main()
{
    const char flag[] = { 0x76,0x71,0xc5,0xa9,0xe2,0x22,0xd8,0xb5,0x73,0xf1,0x92,0x28,0xb2,0xbf,0x90,0x5a,0x76,0x77,0xfc,0xa6,0xb3,0x21,0x90,0xda,0x6f,0xb5,0xcf,0x38 };
    //for (int i = 0; i < 28; ++i) {
    //    int var1 = flag[i];
    //    int var2 = recurrence(var1);
    //    cout << (var1 ^ var2);
    //}

    return 0;
}
