#include <iostream>
#include <fstream>
#include <string>
#include <cryptopp/sha.h>
#include <cryptopp/hex.h>
#include <cryptopp/files.h>

using namespace CryptoPP;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string hash;

    try {
        SHA256 sha256;
        FileSource(filename.c_str(), true, new HashFilter(sha256, new HexEncoder(new StringSink(hash))));
        
        std::cout << "SHA256 hash of " << filename << ":\n" << hash << std::endl;
    } catch (const Exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
