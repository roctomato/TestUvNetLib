#ifndef CONFIGINFO_HPP
#define CONFIGINFO_HPP

#include "read_config.h"



class ConfigInfo: public mb::config
{
public:
	ConfigInfo();
	~ConfigInfo();

	bool LoadCfg( const char* pCfg );
	void PrintExamleCfg();

};


#endif // CONFIGINFO_HPP
