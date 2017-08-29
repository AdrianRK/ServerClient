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

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>

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
}  /* -----  end of method CWsocket::CWsocket  (constructor)  ----- */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  CWsocket
 *      Method:  CWsocket
 * Description:  Destructor 
 *--------------------------------------------------------------------------------------
 */
CWsocket::~CWSocket ()
{
}		/* -----  end of method CWsocket::~CWSocket (destructor) ----- */


