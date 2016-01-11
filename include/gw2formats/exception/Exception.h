#ifndef GW2DATTOOLS_EXCEPTION_EXCEPTION_H
#define GW2DATTOOLS_EXCEPTION_EXCEPTION_H

#include <exception>
#include <string>

#include <gw2formats/base.h>

namespace gw2f {
	namespace exception {

		class GW2FORMATS_API Exception : public std::exception {
		private:
			std::string errorMessage;
		public:
			Exception( const char* iReason );
			virtual ~Exception( );
			// overriden what() method from exception class
			virtual const char *what( ) const throw( );
		};

	}
}

#endif // GW2DATTOOLS_EXCEPTION_EXCEPTION_H
