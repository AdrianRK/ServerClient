/*
 * =====================================================================================
 *
 *       Filename:  CWSocket.cpp
 *
 *    Description:  Simple wrapper over POSIX socket
 *
 *        Version:  1.0
 *        Created:  08/29/2017 03:36:12 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <iostream>
#include "CWSocket.hpp"



/*
 *--------------------------------------------------------------------------------------
 *       Class:  CWsocket
 *      Method:  CWsocket
 * Description:  constructor
 *--------------------------------------------------------------------------------------
 */
CWsocket::CWsocket (): mSocket()
{
	int ret = socket(AF_INET6,SOCK_STREAM | SOCK_CLOEXEC,0);
	if	(-1 == ret)
	{
		std::cerr<< "Cannor create socket!\n";
		exit(1);
	}
}  /* -----  end of method CWsocket::CWsocket  (constructor)  ----- */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  CWsocket
 *      Method:  CWsocket
 * Description:  destructor 
 *--------------------------------------------------------------------------------------
 */
CWsocket::~CWsocket ()
{
}		/* -----  end of method CWsocket::~CWSocket (destructor) ----- */


