/*
 * =====================================================================================
 *
 *       Filename:  CWSocket.hpp
 *
 *    Description:  simple wrapper over POSIX Sockets
 *
 *        Version:  1.0
 *        Created:  08/29/2017 03:23:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <string>
#include <vector>

/*
 * =====================================================================================
 *        Class:  CWsocket
 *  Description:  socket wrapper
 * =====================================================================================
 */
class CWsocket
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		CWsocket ();                             /* constructor */
		CWsocket (const std::string &, int port);
		CWsocket (int sockif); 
		~CWsocket (); 

		int Bind(const std::string&, int port);
		int Connect(const std::string&, int port);
		int Listen();
		CWsocket Accept();
		int Send(const std::vector<unsigned char>&);
		const std::vector<unsigned char> Receive();
		/* ====================  ACCESSORS     ======================================= */

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

	protected:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */

	private:
		/* ====================  METHODS       ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
	int mSocket;

}; /* -----  end of class CWsocket  ----- */

