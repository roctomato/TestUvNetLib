/*
 * ConfigInfo.cpp
 *
 *  Created on: 2011-10-24
 *      Author: zq
 */


#include <iostream>
#include <fstream>



#include "ConfigInfo.h"
//#include "zbyrpc/gatefacade.h"

using namespace std;

ConfigInfo::ConfigInfo() {
	// TODO Auto-generated constructor stub
	this->maxConnectTime = 5;//MAX_CONNECTTIME_DEFAULT
	this->local.ip = "0.0.0.0";
	this->local.port = 27003;
}

ConfigInfo::~ConfigInfo() {
	// TODO Auto-generated destructor stub
}
bool ConfigInfo::LoadCfg( const char* pCfg )
{
	string strJson;
	ifstream cfgFile ;
	cfgFile.open( pCfg);
	if ( cfgFile.is_open())
	{ 
		string temp;
		while (! cfgFile.eof() ) {
			temp.clear();
			cfgFile>> temp;
			strJson += temp;
			//cout << temp<<endl;
		}

	
		zby::config& cfg = *this;
		cout <<'\n'<< strJson<<endl;
		ReadFromJson( cfg,  strJson) ;
		return true;
	}

	return false;
}
void ConfigInfo::PrintExamleCfg()
{
	
    std::string str;
	 WriteToJsonStr( *this,  str, true);
	 cout << str<<endl;
}

