#define CATCH_CONFIG_MAIN
#include "catch.hpp"

template< typename Result >
struct turtle_catch_policy
{
    static Result abort()
    {
        FAIL("ABORT");
    }

    template< typename Context >
    static void fail( const char* message, const Context&, const char* file = "unknown location", int line = 0 )
    {
        Catch::AssertionInfo assertionInfo( "FAIL", ::Catch::SourceLineInfo( file, static_cast<std::size_t>( line ) ), "", Catch::ResultDisposition::Normal );
        if( Catch::ResultAction::Value internal_catch_action = Catch::getResultCapture().acceptExpression( Catch::ExpressionResultBuilder( Catch::ResultWas::ExplicitFailure ) << message, assertionInfo )  ) {
            if( internal_catch_action & Catch::ResultAction::Debug ) BreakIntoDebugger();
            if( internal_catch_action & Catch::ResultAction::Abort ) throw Catch::TestFailureException();
            if( !Catch::shouldContinueOnFailure( Catch::ResultDisposition::Normal ) ) throw Catch::TestFailureException();
        }
    }
    template< typename Context >
    static void call( const Context& context, const char* file, int line )
    {
        Catch::AssertionInfo assertionInfo( "CALL MOCK", ::Catch::SourceLineInfo( file, static_cast<std::size_t>( line ) ), "", Catch::ResultDisposition::Normal );
        if( Catch::ResultAction::Value internal_catch_action = Catch::getResultCapture().acceptExpression( Catch::ExpressionResultBuilder( Catch::ResultWas::Ok ) << "call mock", assertionInfo )  ) {
            if( internal_catch_action & Catch::ResultAction::Debug ) BreakIntoDebugger();
            if( internal_catch_action & Catch::ResultAction::Abort ) throw Catch::TestFailureException();
            if( !Catch::shouldContinueOnFailure( Catch::ResultDisposition::Normal ) ) throw Catch::TestFailureException();
        }
    }
    static void pass( const char* file, int line )
    {
        Catch::AssertionInfo assertionInfo( "PASS", ::Catch::SourceLineInfo( file, static_cast<std::size_t>( line ) ), "", Catch::ResultDisposition::Normal );
        if( Catch::ResultAction::Value internal_catch_action = Catch::getResultCapture().acceptExpression( Catch::ExpressionResultBuilder( Catch::ResultWas::Ok ), assertionInfo )  ) {
            if( internal_catch_action & Catch::ResultAction::Debug ) BreakIntoDebugger();
            if( internal_catch_action & Catch::ResultAction::Abort ) throw Catch::TestFailureException();
            if( !Catch::shouldContinueOnFailure( Catch::ResultDisposition::Normal ) ) throw Catch::TestFailureException();
        }
    }
};

#define MOCK_ERROR_POLICY turtle_catch_policy

#include "eventdispatcherlibuv.h"
