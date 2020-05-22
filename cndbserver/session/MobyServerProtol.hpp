#ifndef MOBYSERVERPROTOL_HPP
#define MOBYSERVERPROTOL_HPP

#include "ProtolTcp.hpp" // Base class: NetProtocolHandler

struct MobyMsgHeader {
    uint32_t len = 0;
    uint16_t cmd = 0;
    uint64_t playerId = 0;
    bool  ReadFrom( CInArchive& in );
    bool  WriteTo( COutBuff& out);
    bool  PushTo( uint16_t c, GenSendQueue& sq, uint64_t p =0);
};

const int  MobyMsgHeader_SZ  = 14;
const int  MAX_BODY = 1024 * 1024;



class MobyServerProtol : public NetProtocolHandler
{
public:
    MobyServerProtol();
    ~MobyServerProtol();

    ///////implement NetProtocolHandler /////////////////
    int GetHeadSize() override;
    int GetMaxSize() override;
    int GetBodySize(LsUInt8* pHeaderBuf, int len) override;
    /////////////////////////////////////////////////////
};

#endif // MOBYSERVERPROTOL_HPP
