/*
 * ConfigInfo.h
 *
 *  Created on: 2011-10-24
 *      Author: zq
 */

#ifndef CONFIGINFO_H_
#define CONFIGINFO_H_
#include "read_config.h"



class ConfigInfo: public zby::config
{
public:
	ConfigInfo();
	~ConfigInfo();

	bool LoadCfg( const char* pCfg );
	void PrintExamleCfg();

};

#endif /* CONFIGINFO_H_ */
