
#include <iostream>
#include <fstream>



#include "ConfigInfo.hpp"

using namespace std;

ConfigInfo::ConfigInfo() {
	
}

ConfigInfo::~ConfigInfo() {
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

	
		mb::config& cfg = *this;
		cout <<'\n'<< strJson<<endl;
		ReadFromJsonStr( cfg,  strJson) ;
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

