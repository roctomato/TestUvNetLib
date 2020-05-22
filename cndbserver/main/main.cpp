#include <stdio.h>
#include "cndbserver.h"

int main(int argc, char **argv)
{	
	AppNetStack* as = AppNetStack::Instance();
	if ( !as->Init( argc, argv, cndbserver::Instance() ) ){
		SYS_ERR("Init failed");
		return -1;
	}
	
	if ( !as->StartWork() ){
		SYS_ERR("start work failed");
		return -2;
	}
	return 0;
}
