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
        processAssertionInfo(
            Catch::AssertionInfo(
                "FAIL",
                ::Catch::SourceLineInfo( file, static_cast<std::size_t>( line ) ),
                "",
                Catch::ResultDisposition::Normal
            ),
            Catch::ResultWas::ExplicitFailure,
            message
        );
    }
    template< typename Context >
    static void call( const Context&, const char* file, int line )
    {
        processAssertionInfo(
            Catch::AssertionInfo(
                "CALL MOCK",
                ::Catch::SourceLineInfo( file, static_cast<std::size_t>( line ) ),
                "",
                Catch::ResultDisposition::Normal
            ),
            Catch::ResultWas::Ok,
            "call mock"
        );
    }
    static void pass( const char* file, int line )
    {
        processAssertionInfo(
            Catch::AssertionInfo(
                "PASS",
                ::Catch::SourceLineInfo( file, static_cast<std::size_t>( line ) ),
                "",
                Catch::ResultDisposition::Normal
            ),
            Catch::ResultWas::Ok
        );
    }

    static void processAssertionInfo(Catch::AssertionInfo assertionInfo, Catch::ResultWas::OfType resultType, std::string message = "")
    {
        if( Catch::ResultAction::Value internal_catch_action = Catch::getResultCapture().acceptExpression( Catch::ExpressionResultBuilder( resultType ) << message, assertionInfo )  ) {
            if( internal_catch_action & Catch::ResultAction::Debug ) BreakIntoDebugger();
            if( internal_catch_action & Catch::ResultAction::Abort ) throw Catch::TestFailureException();
            if( !Catch::shouldContinueOnFailure( Catch::ResultDisposition::Normal ) ) throw Catch::TestFailureException();
        }
    }
};

template<>
struct turtle_catch_policy<int> : turtle_catch_policy<void>
{
    static int abort()
    {
        FAIL("ABORT");
        return 0;
    }
};

template<>
struct turtle_catch_policy<long unsigned int> : turtle_catch_policy<int>
{};

#define MOCK_ERROR_POLICY turtle_catch_policy

#include "eventdispatcherlibuv.h"
