#include <gw2formats/exception/Exception.h>

namespace gw2f {
	namespace exception {

		Exception::Exception( const char* iReason ) :
			errorMessage( iReason ) {
		}

		Exception::~Exception( ) {
		}

		const char *Exception::what( ) const throw( ) {
			return errorMessage.c_str( );
		}

	}
}
