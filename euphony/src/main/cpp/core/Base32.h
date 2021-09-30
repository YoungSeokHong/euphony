#ifndef EUPHONY_BASE32_H
#define EUPHONY_BASE32_H

#include "Base.h"
#include "Base32Exception.h"

namespace Euphony {

    class Base32 : public Base {
    public:
        Base32(const HexVector &hexVectorSrc);
        ~Base32() = default;
        std::string getBaseString();
        const HexVector &getHexVector() const;
        int convertChar2Int(char source) const;
        char convertInt2Char(int source) const;

    private:
        HexVector hexVector;

        int hexToDec(u_int8_t hex, int i);
        std::string decToBase32(int sum);
    };
}

#endif //EUPHONY_BASE32_H
