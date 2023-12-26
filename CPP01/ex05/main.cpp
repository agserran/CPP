#include "Harl.hpp"

int main(void)
{
	{
    	Harl debug;
	    debug.complain("debug");
	}
	{
    	Harl info;
	    info.complain("info");
	}
	{
    	Harl warning;
	    warning.complain("warning");
	}
	{
    	Harl error;
	    error.complain("error");
	}
	{
    	Harl non_existent;
	    non_existent.complain("non_existent");
	}
	{
    	Harl empty;
	    empty.complain("");
	}
    return (0);
}