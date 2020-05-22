#include "MobyServerProtol.hpp"

MobyServerProtol::MobyServerProtol()
{
}

MobyServerProtol::~MobyServerProtol()
{
}

int MobyServerProtol::GetHeadSize()
{
    return MobyMsgHeader_SZ;
}

int MobyServerProtol::GetMaxSize()
{
    return MAX_BODY;
}

int MobyServerProtol::GetBodySize(LsUInt8* pHeaderBuf, int len)
{
    CInArchive in( (char*)pHeaderBuf, len );
    MobyMsgHeader head;
    head.ReadFrom(in);
    
    return head.len - MobyMsgHeader_SZ;
}


bool MobyMsgHeader::ReadFrom(CInArchive& in)
{
    in >> len >> cmd >> playerId;
    len = ntohl(len);
    cmd = ntohs(cmd);
    playerId = ntohl(playerId);
    return true;
}

bool MobyMsgHeader::WriteTo(COutBuff& out)
{
    len = htonl(len);
    cmd = htons(cmd);
    playerId = htonl(playerId);
    out <<  len << cmd << playerId;
    return true;
}

bool MobyMsgHeader::PushTo(uint16_t c, GenSendQueue& sq, uint64_t p)
{
    len = sq.GetTotalSize() + MobyMsgHeader_SZ;
    cmd = c;
    playerId = p;
    COutArchive* out = sq.AddArchiveBuff(false);
    if ( out ){
        this->WriteTo(*out);
        return true;
    }
    return false;
}
