#include <stdio.h>
#include "gateapp.h"

int main(int argc, char **argv)
{

	AppNetStack* as = AppNetStack::Instance();
	if ( !as->Init( argc, argv, GateApp::Instance() ) ){
		SYS_INFO("Init failed");
		return -1;
	}
	
	if ( !as->StartWork() ){
		SYS_INFO("start work failed");
		return -2;
	}
	
	return 0;
}
