//
// Created by zzm on 2026/2/3
// Part of RVision
//

#include "Machine/Address.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;
using namespace RVision;
using namespace std;

void Address::print() const
{
    dbgs() << format_hex(p, 18) << "\n";
}

std::string Address::str() const
{
    std::string s;
    raw_string_ostream os(s);
    os << format_hex(p, 0);
    return os.str();
}

namespace RVision
{
    std::ostream& operator<<(std::ostream& os, const Address& addr){
        return os << addr.str();
    }

    raw_ostream& operator<<(raw_ostream& os, const Address& addr){
        return os << left_justify(addr.str(), Address::len);
    }

}


