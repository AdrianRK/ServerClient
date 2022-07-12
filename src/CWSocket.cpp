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
#include <arpa/inet.h>
#include <unistd.h>

/*
 *--------------------------------------------------------------------------------------
 *       Class:  CWsocket
 *      Method:  CWsocket
 * Description:  constructor
 *--------------------------------------------------------------------------------------
 */
CWsocket::CWsocket (const std::string & ip, int port): mSocket()
{
	int ret = socket(AF_INET6,SOCK_STREAM | SOCK_CLOEXEC,0);
	if	(-1 == ret)
	{
		std::cerr<< "Cannor create socket!\n";
		exit(1);
	}
	Bind(ip, port);
}  /* -----  end of method CWsocket::CWsocket  (constructor)  ----- */

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
		std::cerr<< "Cannot create socket!\n";
		exit(1);
	}
}  /* -----  end of method CWsocket::CWsocket  (constructor)  ----- */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  CWsocket
 *      Method:  CWsocket
 * Description:  constructor
 *--------------------------------------------------------------------------------------
 */
CWsocket::CWsocket (int sockif): mSocket(sockif)
{
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
	close(mSocket);
}		/* -----  end of method CWsocket::~CWsocket (destructor) ----- */

int CWsocket::Bind(const std::string& ip, int port)
{
	struct sockaddr_in addr; 
	addr.sin_family = AF_INET6;
	addr.sin_addr.s_addr = inet_addr(ip.c_str()); 
	addr.sin_port = htons(port);
	int ret = bind(mSocket,reinterpret_cast<sockaddr*>(&addr),sizeof(addr));
	if	(-1 == ret)
	{
		std::cerr<< "Cannor create socket!\n";
		exit(1);
	}
	return ret;
}

int CWsocket::Connect(const std::string& ip, int port)
{
	struct sockaddr_in addr; 
	addr.sin_family = AF_INET6;
	addr.sin_addr.s_addr = inet_addr(ip.c_str()); 
	addr.sin_port = htons(port);
	int ret = bind(mSocket,reinterpret_cast<sockaddr*>(&addr),sizeof(addr));
	if	(-1 == ret)
	{
		std::cerr<< "Cannot Connect to socket!\n";
		exit(1);
	}
	return ret;
}


	int
CWsocket::Listen ( )
{
	int ret = listen(mSocket,10);
	
	if (-1 == ret) 
	{
		std::cerr << "Error listening on socket!\n";
	}
	return ret;
}		/* -----  end of method CWsocket::Listen  ----- */




	CWsocket
CWsocket::Accept ( )
{
	int ret = accept(mSocket, nullptr, nullptr);
	return CWsocket(ret);
}		/* -----  end of method CWsocket::Accept  ----- */



int CWsocket::Send(const std::vector<unsigned char>& buffer)
{
	int ret = send(mSocket, buffer.data(), buffer.size(), 0);
	if (-1 == ret) 
	{
		std::cerr << "Error listening on socket!\n";
	}
	return ret;
}


const std::vector<unsigned char> CWsocket::Receive()
{
	unsigned char buffer[256] = {0,};
	int ret = recv(mSocket, buffer, sizeof(unsigned char) * 256, 0);
	std::vector<unsigned char> buff(buffer, buffer+ret);
	return buff;
}
