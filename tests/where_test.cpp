#define CATCH_CONFIG_MAIN
#include "catch2/catch_test_macros.hpp"
#include "../src/where.hpp"

TEST_CASE("where() finds characters", "[char]") {
    const std::string text = "The quick brown fox";

    REQUIRE(where(text, 'e') == 2);
    REQUIRE(where(text, ' ') == 3);
    REQUIRE(where(text, 'z') == -1);
}

TEST_CASE("where() finds substrings", "[string]") {
    const std::string text = "The quick brown fox";

    REQUIRE(where(text, "e") == 2);
    REQUIRE(where(text, "quick") == 4);
    REQUIRE(where(text, "quiet") == -1);
}
