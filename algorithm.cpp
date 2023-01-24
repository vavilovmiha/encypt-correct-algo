#include <iostream>
#include <string>

std::string data;
std::string encryptedData;
std::string correctedData;

void encryptData() {
    for (int i = 0; i < data.length(); i++) {
        encryptedData += (char)(data[i] ^ key);
    }
}

void errorCorrection() {
    for (int i = 0; i < encryptedData.length(); i++) {
        if (encryptedData[i] == '0') {
            correctedData += '1';
        } else if (encryptedData[i] == '1') {
            correctedData += '0';
        } else {
            correctedData += encryptedData[i];
        }
    }
}

int main() {
    std::cout `oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter data: \";\n    std::cin >>"}` data;

    int key;
    std::cout `oaicite:{"index":1,"invalid_reason":"Malformed citation << \"Enter encryption key: \";\n    std::cin >>"}` key;

    encryptData();

    errorCorrection();

    std::cout << "Corrected and encrypted data: " << correctedData << std::endl;

    return 0;
}
