/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Simple server client application
 *
 *        Version:  1.0
 *        Created:  27.08.2017 11:03:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	if (1 < argc)
	{
		if (std::string(argv[1]) == "Server" || std::string(argv[1]) == "server")
		{
			std::cout<< "Start Server";	
		}
		if (std::string(argv[1]) == "Client" || std::string(argv[1]) == "client")
		{
			std::cout<< "Start Client";	
		}
	}
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
